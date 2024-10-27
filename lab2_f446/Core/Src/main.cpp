/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "string.h"
#include "led_utils.hpp"
#include "etl/vector.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define BUFF_SIZE (100)
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
LED_Vector<8> led_vec;


uint8_t tmp_rx_data;
uint32_t buffer_counter = 0;
uint8_t buffer[BUFF_SIZE] = {0};



void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == huart2.Instance)
	{
	//	Read to Buffer
		if (buffer_counter >= BUFF_SIZE -1) buffer_counter = 0; // Reset buffer counter if size of string too big
		buffer[buffer_counter++] = tmp_rx_data;

	//	Check if buffer is big enough
		if (process_buffer())
		{
			// Reset buffer whenever command executed successfully
			buffer_counter = 0;
			memset(&buffer, 0, BUFF_SIZE);
		}

//		Read the next characters
		HAL_UART_Receive_IT(&huart2, &tmp_rx_data, 1);

	}

}

uint8_t process_buffer()
{
//	HAL_UART_Transmit(&huart2, &buffer, buffer_counter, 1000);
	if (strstr((char*)&buffer, "PING") != NULL)
	{
		char* feedback = "PING OK\n";
		HAL_UART_Transmit(&huart2, (uint8_t*)feedback, strlen(feedback), 1000);
		return 1;
	}
	else if (strstr((char*)&buffer, "ALL ON") != NULL)
	{
		char* feedback = "ALL ON OK\n";
		HAL_UART_Transmit(&huart2, (uint8_t*)feedback, strlen(feedback), 1000);
		led_vec.all_on();
		return 1;
	}
	else if (strstr((char*)&buffer, "ALL OFF") != NULL)
	{
		char* feedback = "ALL OFF OK\n";
		HAL_UART_Transmit(&huart2, (uint8_t*)feedback, strlen(feedback), 1000);
		led_vec.all_off();
		return 1;
	}
	else // Commands with argument
	{
		char tmp_str[BUFF_SIZE] = {0};
//		Copy to tmp string
		strcpy(tmp_str, (char*)buffer);
		char *cmd = strtok(tmp_str, " ");
		char *arg = strtok(NULL, " ");

		if (strstr(cmd, "TURN") != NULL)
		{
			if (strlen(arg) >= 10) // successful got the argument for turn
			{
				char tmp_fb[100];
				strcpy(tmp_fb, "CMD: TURN | ARG: ");
				strcat(tmp_fb, arg);
				strcat(tmp_fb, "\n");
				HAL_UART_Transmit(&huart2, (uint8_t*)tmp_fb, strlen(tmp_fb), 1000);
				led_vec.turn(&arg[2]);
				return 1;
			}
		}
		else if (strstr(cmd, "ASK") != NULL)
		{
			if (strlen(arg) >= 1) // successful got the argument for turn
			{
				char tmp_fb[100];
				itoa(led_vec.get_state(atoi(arg)), tmp_fb, 10);
				strcat(tmp_fb, "\n" );
				HAL_UART_Transmit(&huart2, (uint8_t*)tmp_fb, strlen(tmp_fb), 1000);
				return 1;
			}
		}

	}

//

	return 0;
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */
	LED LED_0 {LED_0_GPIO_Port, LED_0_Pin};
	LED LED_1 {LED_1_GPIO_Port, LED_1_Pin};
	LED LED_2 {LED_2_GPIO_Port, LED_2_Pin};
	LED LED_3 {LED_3_GPIO_Port, LED_3_Pin};
	LED LED_4 {LED_4_GPIO_Port, LED_4_Pin};
	LED LED_5 {LED_5_GPIO_Port, LED_5_Pin};
	LED LED_6 {LED_6_GPIO_Port, LED_6_Pin};
	LED LED_7 {LED_7_GPIO_Port, LED_7_Pin};

	led_vec.vec.push_back(&LED_0);
	led_vec.vec.push_back(&LED_1);
	led_vec.vec.push_back(&LED_2);
	led_vec.vec.push_back(&LED_3);
	led_vec.vec.push_back(&LED_4);
	led_vec.vec.push_back(&LED_5);
	led_vec.vec.push_back(&LED_6);
	led_vec.vec.push_back(&LED_7);
  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */
  HAL_UART_Receive_IT(&huart2, &tmp_rx_data, 1);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Configure the main internal regulator output voltage
  */
  __HAL_RCC_PWR_CLK_ENABLE();
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE1);

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 8;
  RCC_OscInitStruct.PLL.PLLN = 180;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 2;
  RCC_OscInitStruct.PLL.PLLR = 2;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Activate the Over-Drive mode
  */
  if (HAL_PWREx_EnableOverDrive() != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_5) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

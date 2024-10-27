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
#include "dac.h"
#include "tim.h"
#include "usart.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include <math.h>
#include <string.h>
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
#define SINE_N_SAMPLE 255
#define SINE_AMPLITUDE 1
#define SINE_OFFSET 1
#define TIMER_CLOCK 1000000
#define BUFF_SIZE 100
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */
char uart_buf[50];
int uart_buf_len;


uint8_t tmp_rx_data;
uint32_t buffer_counter = 0;
uint8_t buffer[BUFF_SIZE] = {0};

uint16_t timer_val;
int counter = 0;
uint32_t y_sine_digital[SINE_N_SAMPLE];
/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
int process_buffer();
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
void init_y_sine_digital(double V_max)
{
  if (V_max > 3.3) V_max = 3.3;
  if (V_max < 0) V_max = 0.0;

  uint16_t V_max_digital = (V_max/3.3)*0xFFF;

  double resolution = 2*M_PI/SINE_N_SAMPLE;
  for (size_t i = 0; i < SINE_N_SAMPLE; i++)
  {
      y_sine_digital[i] = (sin(i * resolution) + 1) * ((V_max_digital+1)/2);
  }
}

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

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
  MX_DAC_Init();
  MX_TIM14_Init();
  MX_USART2_UART_Init();
  /* USER CODE BEGIN 2 */

  // Say something
  uart_buf_len = sprintf(uart_buf, "Timer test\r\n");
  HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);

  // Init y sine value;
  init_y_sine_digital(3.3);

  // Start timer
  HAL_TIM_Base_Start_IT(&htim14);

  // Start DAC
  HAL_DAC_Start(&hdac, DAC1_CHANNEL_1);

  // Start UART Reading
  HAL_UART_Receive_IT(&huart2, &tmp_rx_data, 1);

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
//      // Get current timer (us)
//      timer_val = __HAL_TIM_GET_COUNTER(&htim14);
//
//      // Wait for 50ms
//      HAL_Delay(50);
//
//
//      // Get timer elapsed
//      timer_val = __HAL_TIM_GET_COUNTER(&htim14) - timer_val;
//
//      // Show elapsed time
//      uart_buf_len = sprintf(uart_buf, "%u us\r\n", timer_val);
//      HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);
//
//      // Wait again so we don't flood the serial terminal
//      HAL_Delay(1000);

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
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 150;
  RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
  RCC_OscInitStruct.PLL.PLLQ = 7;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
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

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_4) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

// Callback: timer has reset
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
{
  // Check which version of ther timer triggered this callback
  if (htim == &htim14)
  {
      static size_t current_index = 0;

      // Set value to DAC
      HAL_DAC_SetValue(&hdac, DAC_CHANNEL_1, DAC_ALIGN_12B_R, y_sine_digital[current_index]);

      // Increase index
      current_index++;
      // Reset index if out of range
      if (current_index > SINE_N_SAMPLE)
      {
	current_index = 0;
      }
  }



//  // Check which version of ther timer triggered this callback
//  if (htim == &htim14)
//  {
//    // Toggle the pin
//    HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
//
//    // Print to terminal
//    uart_buf_len = sprintf(uart_buf, "Timer called\r\n");
//    HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);
//
//    // Change the Timer CNT
//    if (counter > 10)
//    {
//      __HAL_TIM_SET_AUTORELOAD(htim, 20000 - 1);
//
//      uart_buf_len = sprintf(uart_buf, "Timer  reload value changed\r\n");
//      HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);
//    }
//
//    counter++;
//  }
}


// Callback: UART Read 1 byte new
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
	if (huart->Instance == huart2.Instance)
	{
	    //	Read to Buffer
	  if (buffer_counter >= BUFF_SIZE -1) buffer_counter = 0; // Reset buffer counter if size of string too big
	  buffer[buffer_counter++] = tmp_rx_data;

	  // Check if charater is newline
	  if (tmp_rx_data == '\n')
	  {
	    process_buffer();
	    buffer_counter = 0;
	    memset(&buffer, 0, BUFF_SIZE);
	  }

//	  Read the next characters
	  HAL_UART_Receive_IT(&huart2, &tmp_rx_data, 1);

	}

}

// Callback: button has been pressed
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if (GPIO_Pin == B1_Pin)
  {
	  HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
	  HAL_Delay(1000);
  }
}

// Utility function: Process buffer
int process_buffer()
{
  if (strstr((char*)&buffer, "PING") != NULL)
  {
    uart_buf_len = sprintf(uart_buf, "PING OK\r\n");
    HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);
    return 1;
  }
  else // Commands with argument
  {
    char tmp_str[BUFF_SIZE] = {0};
    // Copy to tmp string
    strcpy(tmp_str, (char*)buffer);
    char *cmd = strtok(tmp_str, " ");
    char *arg = strtok(NULL, " ");

    if (strstr(cmd, "F") != NULL)
    {
      if (strlen(arg) >= 1)
      {
	uint16_t freq = atoi(arg);
	if (freq)
	{
	  // Print to terminal
	  uart_buf_len = sprintf(uart_buf, "Changing frequency to %d\r\n", freq);
	  HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);

	  // Execute method
	  uint16_t reload_value = TIMER_CLOCK/(freq*SINE_N_SAMPLE);
	  __HAL_TIM_SET_AUTORELOAD(&htim14, reload_value - 1);
	  __HAL_TIM_SET_COUNTER(&htim14, 0);

	  return 1;
	}
      }
    }
    else if (strstr(cmd, "A") != NULL)
    {
      if (strlen(arg) >= 5)
      {
	float A = (arg[0] - '0') + 0.1*(arg[2] - '0');
	// Print to terminal
	uart_buf_len = sprintf(uart_buf, "Changing amplitude to %f \r\n", A);
	HAL_UART_Transmit(&huart2, (uint8_t *)uart_buf, uart_buf_len, 100);

	// Execute method
	init_y_sine_digital(A);

	return 1;
      }
    }
  }

  return 0;
}

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

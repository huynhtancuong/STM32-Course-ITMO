/*
 * protocol.h
 *
 *  Created on: Nov 5, 2024
 *      Author: huynh
 */

#ifndef INC_PROTOCOL_H_
#define INC_PROTOCOL_H_

#define BUFF_SIZE 100

uint8_t tmp_rx_data;
uint32_t buffer_counter = 0;
uint8_t buffer[BUFF_SIZE] = {0};

char uart_tx_buf[50];
int uart_tx_buf_len;

// Function pointers
void (*change_freq_ptr)(float);
void (*change_A_ptr)(double);

void UART_RX_Callback(UART_HandleTypeDef *huart)
{
  //	Read to Buffer
  if (buffer_counter >= BUFF_SIZE -1) buffer_counter = 0; // Reset buffer counter if size of string too big
  buffer[buffer_counter++] = tmp_rx_data;

  // Check if charater is newline
  if (tmp_rx_data == '\n')
  {
    process_buffer(huart);
    buffer_counter = 0;
    memset(&buffer, 0, BUFF_SIZE);
  }

//	  Read the next characters
  HAL_UART_Receive_IT(huart, &tmp_rx_data, 1);
}

// Utility function: Process buffer
int process_buffer(UART_HandleTypeDef *huart)
{
  if (strstr((char*)&buffer, "PING") != NULL)
  {
      uart_tx_buf_len = sprintf(uart_tx_buf, "PING OK\r\n");
    HAL_UART_Transmit(huart, (uint8_t *)uart_tx_buf, uart_tx_buf_len, 100);
    return 1;
  }
  else // Commands with argument
  {
    char tmp_str[BUFF_SIZE] = {0}; //
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
	  uart_tx_buf_len = sprintf(uart_tx_buf, "Changing frequency to %d\r\n", freq);
	  HAL_UART_Transmit(huart, (uint8_t *)uart_tx_buf, uart_tx_buf_len, 100);

	  // Execute method
	  change_freq_ptr(freq);

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
	uart_tx_buf_len = sprintf(uart_tx_buf, "Changing amplitude to %f \r\n", A);
	HAL_UART_Transmit(huart, (uint8_t *)uart_tx_buf, uart_tx_buf_len, 100);

	// Execute method
//	init_y_sine_digital(A);
	change_A_ptr(A);

	return 1;
      }
    }
  }

  return 0;
}

#endif /* INC_PROTOCOL_H_ */

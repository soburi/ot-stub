#include <utils/uart.h>

/**
 * Enable the UART.
 *
 * @retval OT_ERROR_NONE    Successfully enabled the UART.
 * @retval OT_ERROR_FAILED  Failed to enabled the UART.
 *
 */
otError otPlatUartEnable(void){ return 0; }

/**
 * Disable the UART.
 *
 * @retval OT_ERROR_NONE    Successfully disabled the UART.
 * @retval OT_ERROR_FAILED  Failed to disable the UART.
 *
 */
otError otPlatUartDisable(void){ return 0; }

/**
 * Send bytes over the UART.
 *
 * @param[in] aBuf        A pointer to the data buffer.
 * @param[in] aBufLength  Number of bytes to transmit.
 *
 * @retval OT_ERROR_NONE    Successfully started transmission.
 * @retval OT_ERROR_FAILED  Failed to start the transmission.
 *
 */
otError otPlatUartSend(const uint8_t *aBuf, uint16_t aBufLength){ return 0; }

/**
 * Flush the outgoing transmit buffer and wait for the data to be sent.
 * This is called when the CLI UART interface has a full buffer but still
 * wishes to send more data.
 *
 * @retval OT_ERROR_NONE                Flush succeeded, we can proceed to write more
 *                                      data to the buffer.
 *
 * @retval OT_ERROR_NOT_IMPLEMENTED     Driver does not support synchronous flush.
 * @retval OT_ERROR_INVALID_STATE       Driver has no data to flush.
 */
otError otPlatUartFlush(void){ return 0; }


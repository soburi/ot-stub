#include <openthread/platform/entropy.h>

/**
 * @addtogroup plat-entropy
 *
 * @brief
 *   This module includes the platform abstraction for entropy generation.
 *
 * @{
 *
 */

/**
 * Fill buffer with entropy.
 *
 * This function MUST be implemented using a true random number generator (TRNG).
 *
 * @param[out]  aOutput              A pointer to where the true random values are placed.  Must not be NULL.
 * @param[in]   aOutputLength        Size of @p aBuffer.
 *
 * @retval OT_ERROR_NONE          Successfully filled @p aBuffer with true random values.
 * @retval OT_ERROR_FAILED        Failed to fill @p aBuffer with true random values.
 * @retval OT_ERROR_INVALID_ARGS  @p aBuffer was set to NULL.
 *
 */
otError otPlatEntropyGet(uint8_t *aOutput, uint16_t aOutputLength) { return 0; }

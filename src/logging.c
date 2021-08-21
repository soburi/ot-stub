#include <openthread/platform/logging.h>

/**
 * This function outputs logs.
 *
 * @param[in]  aLogLevel   The log level.
 * @param[in]  aLogRegion  The log region.
 * @param[in]  aFormat     A pointer to the format string.
 * @param[in]  ...         Arguments for the format specification.
 *
 */
void otPlatLog(otLogLevel aLogLevel, otLogRegion aLogRegion, const char *aFormat, ...) {}

/**
 * This (optional) platform function outputs a prepared log line.
 *
 * This platform function is used by OpenThread core when `OPENTHREAD_CONFIG_LOG_DEFINE_AS_MACRO_ONLY` is not enabled
 * (in this case, the OT core itself will prepare a full log line).
 *
 * Note that this function is optional and if not provided by platform layer, a default (weak) implementation is
 * provided and used by OpenThread core as `otPlatLog(aLogLevel, aLogResion, "%s", aLogLine)`.
 *
 * @param[in]  aLogLevel   The log level.
 * @param[in]  aLogRegion  The log region.
 * @param[in]  aLogLine    A pointer to a log line string.
 *
 */
void otPlatLogLine(otLogLevel aLogLevel, otLogRegion aLogRegion, const char *aLogLine) {}


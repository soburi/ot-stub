#include <openthread-system.h>

/**
 * This function performs all platform-specific initialization of OpenThread's drivers.
 *
 * @note This function is not called by the OpenThread library. Instead, the system/RTOS should call this function
 *       when initialization of OpenThread's drivers is most appropriate.
 *
 * @param[in]  argc  Number of arguments in @p argv.
 * @param[in]  argv  Argument vector.
 *
 */
void otSysInit(int argc, char *argv[]) {}

/**
 * This function performs all platform-specific deinitialization for OpenThread's drivers.
 *
 * @note This function is not called by the OpenThread library. Instead, the system/RTOS should call this function
 *       when deinitialization of OpenThread's drivers is most appropriate.
 *
 */
void otSysDeinit(void) {}

/**
 * This function returns true if a pseudo-reset was requested.
 *
 * In such a case, the main loop should shut down and re-initialize the OpenThread instance.
 *
 * @note This function is not called by the OpenThread library. Instead, the system/RTOS should call this function
 *       in the main loop to determine when to shut down and re-initialize the OpenThread instance.
 *
 */
bool otSysPseudoResetWasRequested(void) { return 0; }

/**
 * This function performs all platform-specific processing for OpenThread's example applications.
 *
 * @note This function is not called by the OpenThread library. Instead, the system/RTOS should call this function
 *       in the main loop when processing OpenThread's drivers is most appropriate.
 *
 * @param[in]  aInstance  The OpenThread instance structure.
 *
 */
void otSysProcessDrivers(otInstance *aInstance) {}


#include <openthread/error.h>
#include <openthread/platform/radio.h>

otError otPlatDiagProcess(otInstance *aInstance,
                          uint8_t     aArgsLength,
                          char *      aArgs[],
                          char *      aOutput,
                          size_t      aOutputMaxLen) { return 0; }

void otPlatDiagModeSet(bool aMode) {}

bool otPlatDiagModeGet(void) { return 0; }

void otPlatDiagChannelSet(uint8_t aChannel) { }

void otPlatDiagTxPowerSet(int8_t aTxPower) { }

void otPlatDiagRadioReceived(otInstance *aInstance, otRadioFrame *aFrame, otError aError) { }

void otPlatDiagAlarmCallback(otInstance *aInstance) { }


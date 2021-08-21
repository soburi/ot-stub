#include <openthread/platform/radio.h>

otRadioCaps otPlatRadioGetCaps(otInstance *aInstance) { return 0; }

/**
 * Get the radio version string.
 *
 * This is an optional radio driver platform function. If not provided by platform radio driver, OpenThread uses
 * the OpenThread version instead (@sa otGetVersionString()).
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 *
 * @returns A pointer to the OpenThread radio version.
 *
 */
const char *otPlatRadioGetVersionString(otInstance *aInstance) { return NULL; }

/**
 * Get the radio receive sensitivity value.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @returns The radio receive sensitivity value in dBm.
 *
 */
int8_t otPlatRadioGetReceiveSensitivity(otInstance *aInstance) { return 0; }

/**
 * Get the factory-assigned IEEE EUI-64 for this interface.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 * @param[out] aIeeeEui64  A pointer to the factory-assigned IEEE EUI-64.
 *
 */
void otPlatRadioGetIeeeEui64(otInstance *aInstance, uint8_t *aIeeeEui64) { }

/**
 * Set the PAN ID for address filtering.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[in] aPanId     The IEEE 802.15.4 PAN ID.
 *
 */
void otPlatRadioSetPanId(otInstance *aInstance, otPanId aPanId) {}

/**
 * Set the Extended Address for address filtering.
 *
 * @param[in] aInstance    The OpenThread instance structure.
 * @param[in] aExtAddress  A pointer to the IEEE 802.15.4 Extended Address stored in little-endian byte order.
 *
 *
 */
void otPlatRadioSetExtendedAddress(otInstance *aInstance, const otExtAddress *aExtAddress) {}

/**
 * Set the Short Address for address filtering.
 *
 * @param[in] aInstance      The OpenThread instance structure.
 * @param[in] aShortAddress  The IEEE 802.15.4 Short Address.
 *
 */
void otPlatRadioSetShortAddress(otInstance *aInstance, otShortAddress aShortAddress) {}

/**
 * Get the radio's transmit power in dBm.
 *
 * @note The transmit power returned will be no larger than the power specified in the max power table for
 * the current channel.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[out] aPower    The transmit power in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully retrieved the transmit power.
 * @retval OT_ERROR_INVALID_ARGS     @p aPower was NULL.
 * @retval OT_ERROR_NOT_IMPLEMENTED  Transmit power configuration via dBm is not implemented.
 *
 */
otError otPlatRadioGetTransmitPower(otInstance *aInstance, int8_t *aPower) { return 0; }

/**
 * Set the radio's transmit power in dBm.
 *
 * @note The real transmit power will be no larger than the power specified in the max power table for
 * the current channel.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[in] aPower     The transmit power in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully set the transmit power.
 * @retval OT_ERROR_NOT_IMPLEMENTED  Transmit power configuration via dBm is not implemented.
 *
 */
otError otPlatRadioSetTransmitPower(otInstance *aInstance, int8_t aPower) { return 0; }

/**
 * Get the radio's CCA ED threshold in dBm measured at antenna connector per IEEE 802.15.4 - 2015 section 10.1.4.
 *
 * @param[in] aInstance    The OpenThread instance structure.
 * @param[out] aThreshold  The CCA ED threshold in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully retrieved the CCA ED threshold.
 * @retval OT_ERROR_INVALID_ARGS     @p aThreshold was NULL.
 * @retval OT_ERROR_NOT_IMPLEMENTED  CCA ED threshold configuration via dBm is not implemented.
 *
 */
otError otPlatRadioGetCcaEnergyDetectThreshold(otInstance *aInstance, int8_t *aThreshold) {return 0;}

/**
 * Set the radio's CCA ED threshold in dBm measured at antenna connector per IEEE 802.15.4 - 2015 section 10.1.4.
 *
 * @param[in] aInstance   The OpenThread instance structure.
 * @param[in] aThreshold  The CCA ED threshold in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully set the transmit power.
 * @retval OT_ERROR_INVALID_ARGS     Given threshold is out of range.
 * @retval OT_ERROR_NOT_IMPLEMENTED  CCA ED threshold configuration via dBm is not implemented.
 *
 */
otError otPlatRadioSetCcaEnergyDetectThreshold(otInstance *aInstance, int8_t aThreshold){ return 0; }

/**
 * Get the external FEM's Rx LNA gain in dBm.
 *
 * @param[in]  aInstance  The OpenThread instance structure.
 * @param[out] aGain     The external FEM's Rx LNA gain in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully retrieved the external FEM's LNA gain.
 * @retval OT_ERROR_INVALID_ARGS     @p aGain was NULL.
 * @retval OT_ERROR_NOT_IMPLEMENTED  External FEM's LNA setting is not implemented.
 *
 */
otError otPlatRadioGetFemLnaGain(otInstance *aInstance, int8_t *aGain){ return 0; }

/**
 * Set the external FEM's Rx LNA gain in dBm.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[in] aGain      The external FEM's Rx LNA gain in dBm.
 *
 * @retval OT_ERROR_NONE             Successfully set the external FEM's LNA gain.
 * @retval OT_ERROR_NOT_IMPLEMENTED  External FEM's LNA gain setting is not implemented.
 *
 */
otError otPlatRadioSetFemLnaGain(otInstance *aInstance, int8_t aGain){ return 0; }

/**
 * Get the status of promiscuous mode.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @retval TRUE   Promiscuous mode is enabled.
 * @retval FALSE  Promiscuous mode is disabled.
 *
 */
bool otPlatRadioGetPromiscuous(otInstance *aInstance){ return 0; }

/**
 * Enable or disable promiscuous mode.
 *
 * @param[in]  aInstance The OpenThread instance structure.
 * @param[in]  aEnable   TRUE to enable or FALSE to disable promiscuous mode.
 *
 */
void otPlatRadioSetPromiscuous(otInstance *aInstance, bool aEnable){ }

/**
 * Update MAC keys and key index
 *
 * This function is used when radio provides OT_RADIO_CAPS_TRANSMIT_SEC capability.
 *
 * @param[in]   aInstance    A pointer to an OpenThread instance.
 * @param[in]   aKeyIdMode   The key ID mode.
 * @param[in]   aKeyId       Current MAC key index.
 * @param[in]   aPrevKey     A pointer to the previous MAC key.
 * @param[in]   aCurrKey     A pointer to the current MAC key.
 * @param[in]   aNextKey     A pointer to the next MAC key.
 *
 */
void otPlatRadioSetMacKey(otInstance *    aInstance,
                          uint8_t         aKeyIdMode,
                          uint8_t         aKeyId,
                          const otMacKey *aPrevKey,
                          const otMacKey *aCurrKey,
                          const otMacKey *aNextKey){  }

/**
 * This method sets the current MAC frame counter value.
 *
 * This function is used when radio provides `OT_RADIO_CAPS_TRANSMIT_SEC` capability.
 *
 * @param[in]   aInstance         A pointer to an OpenThread instance.
 * @param[in]   aMacFrameCounter  The MAC frame counter value.
 *
 */
void otPlatRadioSetMacFrameCounter(otInstance *aInstance, uint32_t aMacFrameCounter){ }

/**
 * Get the current estimated time (64bits width) of the radio chip.
 *
 * @param[in]   aInstance    A pointer to an OpenThread instance.
 *
 * @returns The current time in microseconds. UINT64_MAX when platform does not support or radio time is not ready.
 *
 */
uint64_t otPlatRadioGetNow(otInstance *aInstance){ return 0; }

/**
 * Get the bus speed in bits/second between the host and the radio chip.
 *
 * @param[in]   aInstance    A pointer to an OpenThread instance.
 *
 * @returns The bus speed in bits/second between the host and the radio chip.
 *          Return 0 when the MAC and above layer and Radio layer resides on the same chip.
 *
 */
uint32_t otPlatRadioGetBusSpeed(otInstance *aInstance){ return 0; }

/**
 * @}
 *
 */

/**
 * @defgroup radio-operation Operation
 *
 * @brief
 *   This module includes the platform abstraction for radio operations.
 *
 * @{
 *
 */

/**
 * Get current state of the radio.
 *
 * This function is not required by OpenThread. It may be used for debugging and/or application-specific purposes.
 *
 * @note This function may be not implemented. It does not affect OpenThread.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @return  Current state of the radio.
 *
 */
otRadioState otPlatRadioGetState(otInstance *aInstance){ return 0; }

/**
 * Enable the radio.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @retval OT_ERROR_NONE     Successfully enabled.
 * @retval OT_ERROR_FAILED   The radio could not be enabled.
 *
 */
otError otPlatRadioEnable(otInstance *aInstance){ return 0; }

/**
 * Disable the radio.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @retval OT_ERROR_NONE            Successfully transitioned to Disabled.
 * @retval OT_ERROR_INVALID_STATE   The radio was not in sleep state.
 *
 */
otError otPlatRadioDisable(otInstance *aInstance){ return 0; }

/**
 * Check whether radio is enabled or not.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @returns TRUE if the radio is enabled, FALSE otherwise.
 *
 */
bool otPlatRadioIsEnabled(otInstance *aInstance){ return 0; }

/**
 * Transition the radio from Receive to Sleep (turn off the radio).
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @retval OT_ERROR_NONE          Successfully transitioned to Sleep.
 * @retval OT_ERROR_BUSY          The radio was transmitting.
 * @retval OT_ERROR_INVALID_STATE The radio was disabled.
 *
 */
otError otPlatRadioSleep(otInstance *aInstance){ return 0; }

/**
 * Transition the radio from Sleep to Receive (turn on the radio).
 *
 * @param[in]  aInstance  The OpenThread instance structure.
 * @param[in]  aChannel   The channel to use for receiving.
 *
 * @retval OT_ERROR_NONE          Successfully transitioned to Receive.
 * @retval OT_ERROR_INVALID_STATE The radio was disabled or transmitting.
 *
 */
otError otPlatRadioReceive(otInstance *aInstance, uint8_t aChannel){ return 0; }

/**
 * Schedule a radio reception window at a specific time and duration.
 *
 * @param[in]  aChannel   The radio channel on which to receive.
 * @param[in]  aStart     The receive window start time, in microseconds.
 * @param[in]  aDuration  The receive window duration, in microseconds
 *
 * @retval OT_ERROR_NONE    Successfully scheduled receive window.
 * @retval OT_ERROR_FAILED  The receive window could not be scheduled.
 */
otError otPlatRadioReceiveAt(otInstance *aInstance, uint8_t aChannel, uint32_t aStart, uint32_t aDuration){ return 0; }

/**
 * The radio driver calls this method to notify OpenThread of a received frame.
 *
 * @param[in]  aInstance The OpenThread instance structure.
 * @param[in]  aFrame    A pointer to the received frame or NULL if the receive operation failed.
 * @param[in]  aError    OT_ERROR_NONE when successfully received a frame,
 *                       OT_ERROR_ABORT when reception was aborted and a frame was not received,
 *                       OT_ERROR_NO_BUFS when a frame could not be received due to lack of rx buffer space.
 *
 */
/**
 * Get the radio transmit frame buffer.
 *
 * OpenThread forms the IEEE 802.15.4 frame in this buffer then calls `otPlatRadioTransmit()` to request transmission.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @returns A pointer to the transmit frame buffer.
 *
 */
otRadioFrame *otPlatRadioGetTransmitBuffer(otInstance *aInstance){ return 0; }

/**
 * Begin the transmit sequence on the radio.
 *
 * The caller must form the IEEE 802.15.4 frame in the buffer provided by `otPlatRadioGetTransmitBuffer()` before
 * requesting transmission.  The channel and transmit power are also included in the otRadioFrame structure.
 *
 * The transmit sequence consists of:
 * 1. Transitioning the radio to Transmit from one of the following states:
 *    - Receive if RX is on when the device is idle or OT_RADIO_CAPS_SLEEP_TO_TX is not supported
 *    - Sleep if RX is off when the device is idle and OT_RADIO_CAPS_SLEEP_TO_TX is supported.
 * 2. Transmits the psdu on the given channel and at the given transmit power.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[in] aFrame     A pointer to the frame to be transmitted.
 *
 * @retval OT_ERROR_NONE          Successfully transitioned to Transmit.
 * @retval OT_ERROR_INVALID_STATE The radio was not in the Receive state.
 *
 */
otError otPlatRadioTransmit(otInstance *aInstance, otRadioFrame *aFrame){ return 0; }

/**
 * The radio driver calls this method to notify OpenThread that the transmission has started.
 *
 * @note  This function should be called by the same thread that executes all of the other OpenThread code. It should
 *        not be called by ISR or any other task.
 *
 * @param[in]  aInstance  A pointer to the OpenThread instance structure.
 * @param[in]  aFrame     A pointer to the frame that is being transmitted.
 *
 */

/**
 * The radio driver calls this function to notify OpenThread that the transmit operation has completed,
 * providing both the transmitted frame and, if applicable, the received ack frame.
 *
 * When radio provides `OT_RADIO_CAPS_TRANSMIT_SEC` capability, radio platform layer updates @p aFrame
 * with the security frame counter and key index values maintained by the radio.
 *
 * @param[in]  aInstance  The OpenThread instance structure.
 * @param[in]  aFrame     A pointer to the frame that was transmitted.
 * @param[in]  aAckFrame  A pointer to the ACK frame, NULL if no ACK was received.
 * @param[in]  aError     OT_ERROR_NONE when the frame was transmitted,
 *                        OT_ERROR_NO_ACK when the frame was transmitted but no ACK was received,
 *                        OT_ERROR_CHANNEL_ACCESS_FAILURE tx could not take place due to activity on the channel,
 *                        OT_ERROR_ABORT when transmission was aborted for other reasons.
 *
 */

/**
 * The radio driver calls this method to notify OpenThread diagnostics module that the transmission has completed.
 *
 * This function is used when diagnostics is enabled.
 *
 * @param[in]  aInstance      The OpenThread instance structure.
 * @param[in]  aFrame         A pointer to the frame that was transmitted.
 * @param[in]  aError         OT_ERROR_NONE when the frame was transmitted,
 *                            OT_ERROR_CHANNEL_ACCESS_FAILURE tx could not take place due to activity on the channel,
 *                            OT_ERROR_ABORT when transmission was aborted for other reasons.
 *
 */

/**
 * Get the most recent RSSI measurement.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @returns The RSSI in dBm when it is valid.  127 when RSSI is invalid.
 *
 */
int8_t otPlatRadioGetRssi(otInstance *aInstance){ return 0; }

/**
 * Begin the energy scan sequence on the radio.
 *
 * This function is used when radio provides OT_RADIO_CAPS_ENERGY_SCAN capability.
 *
 * @param[in] aInstance      The OpenThread instance structure.
 * @param[in] aScanChannel   The channel to perform the energy scan on.
 * @param[in] aScanDuration  The duration, in milliseconds, for the channel to be scanned.
 *
 * @retval OT_ERROR_NONE             Successfully started scanning the channel.
 * @retval OT_ERROR_NOT_IMPLEMENTED  The radio doesn't support energy scanning.
 *
 */
otError otPlatRadioEnergyScan(otInstance *aInstance, uint8_t aScanChannel, uint16_t aScanDuration){ return 0; }

/**
 * The radio driver calls this method to notify OpenThread that the energy scan is complete.
 *
 * This function is used when radio provides OT_RADIO_CAPS_ENERGY_SCAN capability.
 *
 * @param[in]  aInstance           The OpenThread instance structure.
 * @param[in]  aEnergyScanMaxRssi  The maximum RSSI encountered on the scanned channel.
 *
 */

/**
 * Enable/Disable source address match feature.
 *
 * The source address match feature controls how the radio layer decides the "frame pending" bit for acks sent in
 * response to data request commands from children.
 *
 * If disabled, the radio layer must set the "frame pending" on all acks to data request commands.
 *
 * If enabled, the radio layer uses the source address match table to determine whether to set or clear the "frame
 * pending" bit in an ack to a data request command.
 *
 * The source address match table provides the list of children for which there is a pending frame. Either a short
 * address or an extended/long address can be added to the source address match table.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 * @param[in]  aEnable     Enable/disable source address match feature.
 *
 */
void otPlatRadioEnableSrcMatch(otInstance *aInstance, bool aEnable){ }

/**
 * Add a short address to the source address match table.
 *
 * @param[in]  aInstance      The OpenThread instance structure.
 * @param[in]  aShortAddress  The short address to be added.
 *
 * @retval OT_ERROR_NONE      Successfully added short address to the source match table.
 * @retval OT_ERROR_NO_BUFS   No available entry in the source match table.
 *
 */
otError otPlatRadioAddSrcMatchShortEntry(otInstance *aInstance, otShortAddress aShortAddress){ return 0; }

/**
 * Add an extended address to the source address match table.
 *
 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[in]  aExtAddress  The extended address to be added stored in little-endian byte order.
 *
 * @retval OT_ERROR_NONE      Successfully added extended address to the source match table.
 * @retval OT_ERROR_NO_BUFS   No available entry in the source match table.
 *
 */
otError otPlatRadioAddSrcMatchExtEntry(otInstance *aInstance, const otExtAddress *aExtAddress){ return 0; }

/**
 * Remove a short address from the source address match table.
 *
 * @param[in]  aInstance      The OpenThread instance structure.
 * @param[in]  aShortAddress  The short address to be removed.
 *
 * @retval OT_ERROR_NONE        Successfully removed short address from the source match table.
 * @retval OT_ERROR_NO_ADDRESS  The short address is not in source address match table.
 *
 */
otError otPlatRadioClearSrcMatchShortEntry(otInstance *aInstance, otShortAddress aShortAddress){ return 0; }

/**
 * Remove an extended address from the source address match table.
 *
 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[in]  aExtAddress  The extended address to be removed stored in little-endian byte order.
 *
 * @retval OT_ERROR_NONE        Successfully removed the extended address from the source match table.
 * @retval OT_ERROR_NO_ADDRESS  The extended address is not in source address match table.
 *
 */
otError otPlatRadioClearSrcMatchExtEntry(otInstance *aInstance, const otExtAddress *aExtAddress){ return 0; }

/**
 * Clear all short addresses from the source address match table.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 *
 */
void otPlatRadioClearSrcMatchShortEntries(otInstance *aInstance){ }

/**
 * Clear all the extended/long addresses from source address match table.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 *
 */
void otPlatRadioClearSrcMatchExtEntries(otInstance *aInstance){ }

/**
 * Get the radio supported channel mask that the device is allowed to be on.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 *
 * @returns The radio supported channel mask.
 *
 */
uint32_t otPlatRadioGetSupportedChannelMask(otInstance *aInstance){ return 0; }

/**
 * Get the radio preferred channel mask that the device prefers to form on.
 *
 * @param[in]  aInstance   The OpenThread instance structure.
 *
 * @returns The radio preferred channel mask.
 *
 */
uint32_t otPlatRadioGetPreferredChannelMask(otInstance *aInstance){ return 0; }

/**
 * Enable the radio coex.
 *
 * This function is used when feature OPENTHREAD_CONFIG_PLATFORM_RADIO_COEX_ENABLE is enabled.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 * @param[in] aEnabled   TRUE to enable the radio coex, FALSE otherwise.
 *
 * @retval OT_ERROR_NONE     Successfully enabled.
 * @retval OT_ERROR_FAILED   The radio coex could not be enabled.
 *
 */
otError otPlatRadioSetCoexEnabled(otInstance *aInstance, bool aEnabled) { return 0; }

/**
 * Check whether radio coex is enabled or not.
 *
 * This function is used when feature OPENTHREAD_CONFIG_PLATFORM_RADIO_COEX_ENABLE is enabled.
 *
 * @param[in] aInstance  The OpenThread instance structure.
 *
 * @returns TRUE if the radio coex is enabled, FALSE otherwise.
 *
 */
bool otPlatRadioIsCoexEnabled(otInstance *aInstance) { return 0; }

/**
 * Get the radio coexistence metrics.
 *
 * This function is used when feature OPENTHREAD_CONFIG_PLATFORM_RADIO_COEX_ENABLE is enabled.
 *
 * @param[in]  aInstance     The OpenThread instance structure.
 * @param[out] aCoexMetrics  A pointer to the coexistence metrics structure.
 *
 * @retval OT_ERROR_NONE          Successfully retrieved the coex metrics.
 * @retval OT_ERROR_INVALID_ARGS  @p aCoexMetrics was NULL.
 */
otError otPlatRadioGetCoexMetrics(otInstance *aInstance, otRadioCoexMetrics *aCoexMetrics) { return 0; }

/**
 * Enable or disable CSL receiver.
 *
 * @param[in]  aInstance     The OpenThread instance structure.
 * @param[in]  aCslPeriod    CSL period, 0 for disabling CSL.
 * @param[in]  aShortAddr    The short source address of CSL receiver's peer.
 * @param[in]  aExtAddr      The extended source address of CSL receiver's peer.
 *
 * @note Platforms should use CSL peer addresses to include CSL IE when generating enhanced acks.
 *
 * @retval  kErrorNotImplemented Radio driver doesn't support CSL.
 * @retval  kErrorFailed         Other platform specific errors.
 * @retval  kErrorNone           Successfully enabled or disabled CSL.
 *
 */
otError otPlatRadioEnableCsl(otInstance *        aInstance,
                             uint32_t            aCslPeriod,
                             otShortAddress      aShortAddr,
                             const otExtAddress *aExtAddr) { return 0; }

/**
 * Update CSL sample time in radio driver.
 *
 * Sample time is stored in radio driver as a copy to calculate phase when sending ACK with CSL IE.
 *
 * @param[in]  aInstance         The OpenThread instance structure.
 * @param[in]  aCslSampleTime    The latest sample time.
 *
 */
void otPlatRadioUpdateCslSampleTime(otInstance *aInstance, uint32_t aCslSampleTime) { }

/**
 * Get the current accuracy, in units of ± ppm, of the clock used for scheduling CSL operations.
 *
 * @note Platforms may optimize this value based on operational conditions (i.e.: temperature).
 *
 * @param[in]   aInstance    A pointer to an OpenThread instance.
 *
 * @returns The current CSL rx/tx scheduling drift, in units of ± ppm.
 *
 */
uint8_t otPlatRadioGetCslAccuracy(otInstance *aInstance) { return 0; }

/**
 * Set the max transmit power for a specific channel.
 *
 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[in]  aChannel     The radio channel.
 * @param[in]  aMaxPower    The max power in dBm, passing OT_RADIO_RSSI_INVALID will disable this channel.
 *
 * @retval  OT_ERROR_NOT_IMPLEMENTED  The feature is not implemented
 * @retval  OT_ERROR_INVALID_ARGS     The specified channel is not valid.
 * @retval  OT_ERROR_FAILED           Other platform specific errors.
 * @retval  OT_ERROR_NONE             Successfully set max transmit poewr.
 *
 */
otError otPlatRadioSetChannelMaxTransmitPower(otInstance *aInstance, uint8_t aChannel, int8_t aMaxPower) { return 0; }

/**
 * Set the region code.
 *
 * The radio region format is the 2-bytes ascii representation of the
 * ISO 3166 alpha-2 code.
 *
 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[in]  aRegionCode  The radio region.
 *
 * @retval  OT_ERROR_FAILED           Other platform specific errors.
 * @retval  OT_ERROR_NONE             Successfully set region code.
 *
 */
otError otPlatRadioSetRegion(otInstance *aInstance, uint16_t aRegionCode) { return 0; }

/**
 * Get the region code.
 *
 * The radio region format is the 2-bytes ascii representation of the
 * ISO 3166 alpha-2 code.

 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[out] aRegionCode  The radio region.
 *
 * @retval  OT_ERROR_INVALID_ARGS     @p aRegionCode is nullptr.
 * @retval  OT_ERROR_FAILED           Other platform specific errors.
 * @retval  OT_ERROR_NONE             Successfully got region code.
 *
 */
otError otPlatRadioGetRegion(otInstance *aInstance, uint16_t *aRegionCode) { return 0; }

/**
 * Enable/disable or update Enhanced-ACK Based Probing in radio for a specific Initiator.
 *
 * After Enhanced-ACK Based Probing is configured by a specific Probing Initiator, the Enhanced-ACK sent to that
 * node should include Vendor-Specific IE containing Link Metrics data. This method informs the radio to start/stop to
 * collect Link Metrics data and include Vendor-Specific IE that containing the data in Enhanced-ACK sent to that
 * Probing Initiator.
 *
 * @param[in]  aInstance     The OpenThread instance structure.
 * @param[in]  aLinkMetrics  This parameter specifies what metrics to query. Per spec 4.11.3.4.4.6, at most 2 metrics
 *                           can be specified. The probing would be disabled if @p `aLinkMetrics` is bitwise 0.
 * @param[in]  aShortAddr    The short address of the Probing Initiator.
 * @param[in]  aExtAddr      The extended source address of the Probing Initiator. @p aExtAddr MUST NOT be `NULL`.
 *
 * @retval  OT_ERROR_NONE            Successfully configured the Enhanced-ACK Based Probing.
 * @retval  OT_ERROR_INVALID_ARGS    @p aExtAddress is `NULL`.
 * @retval  OT_ERROR_NOT_FOUND       The Initiator indicated by @p aShortAddress is not found when trying to clear.
 * @retval  OT_ERROR_NO_BUFS         No more Initiator can be supported.
 *
 */
otError otPlatRadioConfigureEnhAckProbing(otInstance *        aInstance,
                                          otLinkMetrics       aLinkMetrics,
                                          otShortAddress      aShortAddress,
                                          const otExtAddress *aExtAddress) { return 0; }

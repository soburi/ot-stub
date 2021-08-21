#include <openthread/platform/settings.h>

/**
 * Performs any initialization for the settings subsystem, if necessary.
 *
 * @param[in]  aInstance The OpenThread instance structure.
 *
 */
void otPlatSettingsInit(otInstance *aInstance){ }

/**
 * Performs any de-initialization for the settings subsystem, if necessary.
 *
 * @param[in]  aInstance The OpenThread instance structure.
 *
 */
void otPlatSettingsDeinit(otInstance *aInstance){ }

/**
 * This function sets the critical keys that should be stored in the secure area.
 *
 * Note that the memory pointed by @p aKeys MUST not be released before @p aInstance is destroyed.
 *
 * @param[in]  aInstance    The OpenThread instance structure.
 * @param[in]  aKeys        A pointer to an array containing the list of critical keys.
 * @param[in]  aKeysLength  The number of entries in the @p aKeys array.
 *
 */
void otPlatSettingsSetCriticalKeys(otInstance *aInstance, const uint16_t *aKeys, uint16_t aKeysLength){ }

/// Fetches the value of a setting
/** This function fetches the value of the setting identified
 *  by aKey and write it to the memory pointed to by aValue.
 *  It then writes the length to the integer pointed to by
 *  aValueLength. The initial value of aValueLength is the
 *  maximum number of bytes to be written to aValue.
 *
 *  This function can be used to check for the existence of
 *  a key without fetching the value by setting aValue and
 *  aValueLength to NULL. You can also check the length of
 *  the setting without fetching it by setting only aValue
 *  to NULL.
 *
 *  Note that the underlying storage implementation is not
 *  required to maintain the order of settings with multiple
 *  values. The order of such values MAY change after ANY
 *  write operation to the store.
 *
 *  @param[in]     aInstance     The OpenThread instance structure.
 *  @param[in]     aKey          The key associated with the requested setting.
 *  @param[in]     aIndex        The index of the specific item to get.
 *  @param[out]    aValue        A pointer to where the value of the setting should be written. May be set to NULL if
 *                               just testing for the presence or length of a setting.
 *  @param[inout]  aValueLength  A pointer to the length of the value. When called, this pointer should point to an
 *                               integer containing the maximum value size that can be written to aValue. At return,
 *                               the actual length of the setting is written. This may be set to NULL if performing
 *                               a presence check.
 *
 *  @retval OT_ERROR_NONE             The given setting was found and fetched successfully.
 *  @retval OT_ERROR_NOT_FOUND        The given setting was not found in the setting store.
 *  @retval OT_ERROR_NOT_IMPLEMENTED  This function is not implemented on this platform.
 */
otError otPlatSettingsGet(otInstance *aInstance, uint16_t aKey, int aIndex, uint8_t *aValue, uint16_t *aValueLength){ return 0; }

/// Sets or replaces the value of a setting
/** This function sets or replaces the value of a setting
 *  identified by aKey. If there was more than one
 *  value previously associated with aKey, then they are
 *  all deleted and replaced with this single entry.
 *
 *  Calling this function successfully may cause unrelated
 *  settings with multiple values to be reordered.
 *
 *  @param[in]  aInstance     The OpenThread instance structure.
 *  @param[in]  aKey          The key associated with the setting to change.
 *  @param[in]  aValue        A pointer to where the new value of the setting should be read from. MUST NOT be NULL if
 *                            aValueLength is non-zero.
 *  @param[in]  aValueLength  The length of the data pointed to by aValue. May be zero.
 *
 *  @retval OT_ERROR_NONE             The given setting was changed or staged.
 *  @retval OT_ERROR_NOT_IMPLEMENTED  This function is not implemented on this platform.
 *  @retval OT_ERROR_NO_BUFS          No space remaining to store the given setting.
 */
otError otPlatSettingsSet(otInstance *aInstance, uint16_t aKey, const uint8_t *aValue, uint16_t aValueLength){ return 0; }

/// Adds a value to a setting
/** This function adds the value to a setting
 *  identified by aKey, without replacing any existing
 *  values.
 *
 *  Note that the underlying implementation is not required
 *  to maintain the order of the items associated with a
 *  specific key. The added value may be added to the end,
 *  the beginning, or even somewhere in the middle. The order
 *  of any pre-existing values may also change.
 *
 *  Calling this function successfully may cause unrelated
 *  settings with multiple values to be reordered.
 *
 * @param[in]  aInstance     The OpenThread instance structure.
 * @param[in]  aKey          The key associated with the setting to change.
 * @param[in]  aValue        A pointer to where the new value of the setting should be read from. MUST NOT be NULL
 *                           if aValueLength is non-zero.
 * @param[in]  aValueLength  The length of the data pointed to by aValue. May be zero.
 *
 * @retval OT_ERROR_NONE             The given setting was added or staged to be added.
 * @retval OT_ERROR_NOT_IMPLEMENTED  This function is not implemented on this platform.
 * @retval OT_ERROR_NO_BUFS          No space remaining to store the given setting.
 */
otError otPlatSettingsAdd(otInstance *aInstance, uint16_t aKey, const uint8_t *aValue, uint16_t aValueLength){ return 0; }

/// Removes a setting from the setting store
/** This function deletes a specific value from the
 *  setting identified by aKey from the settings store.
 *
 *  Note that the underlying implementation is not required
 *  to maintain the order of the items associated with a
 *  specific key.
 *
 *  @param[in] aInstance  The OpenThread instance structure.
 *  @param[in] aKey       The key associated with the requested setting.
 *  @param[in] aIndex     The index of the value to be removed. If set to -1, all values for this aKey will be removed.
 *
 *  @retval OT_ERROR_NONE             The given key and index was found and removed successfully.
 *  @retval OT_ERROR_NOT_FOUND        The given key or index was not found in the setting store.
 *  @retval OT_ERROR_NOT_IMPLEMENTED  This function is not implemented on this platform.
 */
otError otPlatSettingsDelete(otInstance *aInstance, uint16_t aKey, int aIndex){ return 0; }

/// Removes all settings from the setting store
/** This function deletes all settings from the settings
 *  store, resetting it to its initial factory state.
 *
 *  @param[in] aInstance  The OpenThread instance structure.
 */
void otPlatSettingsWipe(otInstance *aInstance){ }

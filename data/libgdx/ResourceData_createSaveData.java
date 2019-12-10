/**
 * Creates and adds a new and unique SaveData object to the save data map
 */
public SaveData createSaveData(String key) {
    SaveData saveData = new SaveData(this);
    if (uniqueData.containsKey(key))
        throw new RuntimeException("Key already used, data must be unique, use a different key");
    uniqueData.put(key, saveData);
    return saveData;
}

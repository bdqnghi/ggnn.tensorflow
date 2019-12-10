@Override
public void read(Json json, JsonValue jsonData) {
    uniqueData = json.readValue("unique", ObjectMap.class, jsonData);
    for (Entry<String, SaveData> entry : uniqueData.entries()) {
        entry.value.resources = this;
    }
    data = json.readValue("data", Array.class, SaveData.class, jsonData);
    for (SaveData saveData : data) {
        saveData.resources = this;
    }
    sharedAssets.addAll(json.readValue("assets", Array.class, AssetData.class, jsonData));
    resource = json.readValue("resource", null, jsonData);
}

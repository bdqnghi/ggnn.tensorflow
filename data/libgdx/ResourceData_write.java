@Override
public void write(Json json) {
    json.writeValue("unique", uniqueData, ObjectMap.class);
    json.writeValue("data", data, Array.class, SaveData.class);
    json.writeValue("assets", sharedAssets.toArray(AssetData.class), AssetData[].class);
    json.writeValue("resource", resource, null);
}

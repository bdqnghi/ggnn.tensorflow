@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    spawnWidthValue = json.readValue("spawnWidthValue", ScaledNumericValue.class, jsonData);
    spawnHeightValue = json.readValue("spawnHeightValue", ScaledNumericValue.class, jsonData);
    spawnDepthValue = json.readValue("spawnDepthValue", ScaledNumericValue.class, jsonData);
    edges = json.readValue("edges", boolean.class, jsonData);
}

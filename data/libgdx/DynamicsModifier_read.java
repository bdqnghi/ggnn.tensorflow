@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    isGlobal = json.readValue("isGlobal", boolean.class, jsonData);
}

@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    value = json.readValue("value", float.class, jsonData);
}

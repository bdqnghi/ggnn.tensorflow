@Override
public void read(Json json, JsonValue jsonData) {
    active = json.readValue("active", Boolean.class, jsonData);
}

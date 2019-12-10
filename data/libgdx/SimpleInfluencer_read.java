@Override
public void read(Json json, JsonValue jsonData) {
    value = json.readValue("value", ScaledNumericValue.class, jsonData);
}

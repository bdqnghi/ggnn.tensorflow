@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    lowMin = json.readValue("lowMin", float.class, jsonData);
    lowMax = json.readValue("lowMax", float.class, jsonData);
}

@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    colors = json.readValue("colors", float[].class, jsonData);
    timeline = json.readValue("timeline", float[].class, jsonData);
}

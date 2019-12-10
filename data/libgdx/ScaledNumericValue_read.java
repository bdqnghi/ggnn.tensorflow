@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    highMin = json.readValue("highMin", float.class, jsonData);
    highMax = json.readValue("highMax", float.class, jsonData);
    relative = json.readValue("relative", boolean.class, jsonData);
    scaling = json.readValue("scaling", float[].class, jsonData);
    timeline = json.readValue("timeline", float[].class, jsonData);
}

@Override
public void read(Json json, JsonValue jsonData) {
    super.read(json, jsonData);
    side = json.readValue("side", SpawnSide.class, jsonData);
}

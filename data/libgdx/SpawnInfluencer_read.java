@Override
public void read(Json json, JsonValue jsonData) {
    spawnShapeValue = json.readValue("spawnShape", SpawnShapeValue.class, jsonData);
}

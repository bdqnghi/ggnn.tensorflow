@Override
public void write(Json json) {
    json.writeValue("spawnShape", spawnShapeValue, SpawnShapeValue.class);
}

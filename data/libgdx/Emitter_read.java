@Override
public void read(Json json, JsonValue jsonData) {
    minParticleCount = json.readValue("minParticleCount", int.class, jsonData);
    maxParticleCount = json.readValue("maxParticleCount", int.class, jsonData);
}

@Override
public void write(Json json) {
    json.writeValue("minParticleCount", minParticleCount);
    json.writeValue("maxParticleCount", maxParticleCount);
}

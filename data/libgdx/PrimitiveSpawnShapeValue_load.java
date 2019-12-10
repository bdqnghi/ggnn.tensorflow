@Override
public void load(ParticleValue value) {
    super.load(value);
    PrimitiveSpawnShapeValue shape = (PrimitiveSpawnShapeValue) value;
    edges = shape.edges;
    spawnWidthValue.load(shape.spawnWidthValue);
    spawnHeightValue.load(shape.spawnHeightValue);
    spawnDepthValue.load(shape.spawnDepthValue);
}

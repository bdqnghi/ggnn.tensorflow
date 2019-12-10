@Override
public void load(ParticleValue value) {
    super.load(value);
    SpawnShapeValue shape = (SpawnShapeValue) value;
    xOffsetValue.load(shape.xOffsetValue);
    yOffsetValue.load(shape.yOffsetValue);
    zOffsetValue.load(shape.zOffsetValue);
}

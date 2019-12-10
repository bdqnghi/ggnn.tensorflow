@Override
public void load(ParticleValue value) {
    super.load(value);
    EllipseSpawnShapeValue shape = (EllipseSpawnShapeValue) value;
    side = shape.side;
}

private ParticleController createBillboardController(float[] colors, Texture particleTexture) {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(2900);
    emitter.getLife().setHigh(1000);
    emitter.setMaxParticleCount(3000);
    // Spawn
    PointSpawnShapeValue pointSpawnShapeValue = new PointSpawnShapeValue();
    pointSpawnShapeValue.xOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.xOffsetValue.setActive(true);
    pointSpawnShapeValue.yOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.yOffsetValue.setActive(true);
    pointSpawnShapeValue.zOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.zOffsetValue.setActive(true);
    SpawnInfluencer spawnSource = new SpawnInfluencer(pointSpawnShapeValue);
    // Scale
    ScaleInfluencer scaleInfluencer = new ScaleInfluencer();
    scaleInfluencer.value.setTimeline(new float[] { 0, 1 });
    scaleInfluencer.value.setScaling(new float[] { 1, 0 });
    scaleInfluencer.value.setLow(0);
    scaleInfluencer.value.setHigh(1);
    // Color
    ColorInfluencer.Single colorInfluencer = new ColorInfluencer.Single();
    colorInfluencer.colorValue.setColors(new float[] { colors[0], colors[1], colors[2], 0, 0, 0 });
    colorInfluencer.colorValue.setTimeline(new float[] { 0, 1 });
    colorInfluencer.alphaValue.setHigh(1);
    colorInfluencer.alphaValue.setTimeline(new float[] { 0, 0.5f, 0.8f, 1 });
    colorInfluencer.alphaValue.setScaling(new float[] { 0, 0.15f, 0.5f, 0 });
    // Dynamics
    DynamicsInfluencer dynamicsInfluencer = new DynamicsInfluencer();
    BrownianAcceleration modifier = new BrownianAcceleration();
    modifier.strengthValue.setTimeline(new float[] { 0, 1 });
    modifier.strengthValue.setScaling(new float[] { 0, 1 });
    modifier.strengthValue.setHigh(80);
    modifier.strengthValue.setLow(1, 5);
    dynamicsInfluencer.velocities.add(modifier);
    return new ParticleController("Billboard Controller", emitter, new BillboardRenderer(billboardParticleBatch), new RegionInfluencer.Single(particleTexture), spawnSource, scaleInfluencer, colorInfluencer, dynamicsInfluencer);
}

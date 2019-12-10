private ParticleController createDefaultBillboardController() {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(250);
    emitter.getLife().setHigh(500, 1000);
    emitter.getLife().setTimeline(new float[] { 0, 0.66f, 1 });
    emitter.getLife().setScaling(new float[] { 1, 1, 0.3f });
    emitter.setMaxParticleCount(200);
    // Spawn
    PointSpawnShapeValue pointSpawnShapeValue = new PointSpawnShapeValue();
    SpawnInfluencer spawnSource = new SpawnInfluencer(pointSpawnShapeValue);
    // Color
    ColorInfluencer.Single colorInfluencer = new ColorInfluencer.Single();
    colorInfluencer.colorValue.setColors(new float[] { 1, 0.12156863f, 0.047058824f, 0, 0, 0 });
    colorInfluencer.colorValue.setTimeline(new float[] { 0, 1 });
    colorInfluencer.alphaValue.setHigh(1);
    colorInfluencer.alphaValue.setTimeline(new float[] { 0, 0.5f, 0.8f, 1 });
    colorInfluencer.alphaValue.setScaling(new float[] { 0, 0.15f, 0.5f, 0 });
    // Velocity
    DynamicsInfluencer velocityInfluencer = new DynamicsInfluencer();
    // Directional
    DynamicsModifier.PolarAcceleration velocityValue = new DynamicsModifier.PolarAcceleration();
    velocityValue.phiValue.setHigh(-35, 35);
    velocityValue.phiValue.setActive(true);
    velocityValue.phiValue.setTimeline(new float[] { 0, 0.5f, 1 });
    velocityValue.phiValue.setScaling(new float[] { 1, 0, 0 });
    velocityValue.thetaValue.setHigh(0, 360);
    velocityValue.strengthValue.setHigh(5, 10);
    velocityInfluencer.velocities.add(velocityValue);
    return new ParticleController("Billboard Controller", emitter, new BillboardRenderer(editor.getBillboardBatch()), new RegionInfluencer.Single(editor.getTexture()), spawnSource, colorInfluencer, velocityInfluencer);
}

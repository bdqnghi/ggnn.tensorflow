private ParticleController createDefaultModelInstanceController() {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(80);
    emitter.getLife().setHigh(500, 1000);
    emitter.getLife().setTimeline(new float[] { 0, 0.66f, 1 });
    emitter.getLife().setScaling(new float[] { 1, 1, 0.3f });
    emitter.setMaxParticleCount(100);
    // Color
    ColorInfluencer.Random colorInfluencer = new ColorInfluencer.Random();
    // Spawn
    EllipseSpawnShapeValue spawnShapeValue = new EllipseSpawnShapeValue();
    spawnShapeValue.setDimensions(1, 1, 1);
    SpawnInfluencer spawnSource = new SpawnInfluencer(spawnShapeValue);
    // Velocity
    DynamicsInfluencer velocityInfluencer = new DynamicsInfluencer();
    // Directional
    DynamicsModifier.CentripetalAcceleration velocityValue = new DynamicsModifier.CentripetalAcceleration();
    velocityValue.strengthValue.setHigh(5, 11);
    velocityValue.strengthValue.setActive(true);
    // velocityValue.setActive(true);
    velocityInfluencer.velocities.add(velocityValue);
    return new ParticleController("ModelInstance Controller", emitter, new ModelInstanceRenderer(editor.getModelInstanceParticleBatch()), new ModelInfluencer.Single((Model) editor.assetManager.get(FlameMain.DEFAULT_MODEL_PARTICLE)), spawnSource, colorInfluencer, velocityInfluencer);
}

private ParticleController createDefaultParticleController() {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(90);
    emitter.getLife().setHigh(3000);
    emitter.setMaxParticleCount(100);
    // Spawn
    EllipseSpawnShapeValue pointSpawnShapeValue = new EllipseSpawnShapeValue();
    pointSpawnShapeValue.setDimensions(1, 1, 1);
    pointSpawnShapeValue.setSide(SpawnSide.top);
    SpawnInfluencer spawnSource = new SpawnInfluencer(pointSpawnShapeValue);
    // Scale
    ScaleInfluencer scaleInfluencer = new ScaleInfluencer();
    scaleInfluencer.value.setHigh(1);
    scaleInfluencer.value.setLow(0);
    scaleInfluencer.value.setTimeline(new float[] { 0, 1 });
    scaleInfluencer.value.setScaling(new float[] { 1, 0 });
    // Velocity
    DynamicsInfluencer velocityInfluencer = new DynamicsInfluencer();
    // Directional
    DynamicsModifier.CentripetalAcceleration velocityValue = new DynamicsModifier.CentripetalAcceleration();
    velocityValue.strengthValue.setHigh(5, 10);
    velocityValue.strengthValue.setActive(true);
    velocityInfluencer.velocities.add(velocityValue);
    return new ParticleController("ParticleController Controller", emitter, new ParticleControllerControllerRenderer(), new ParticleControllerInfluencer.Single(editor.assetManager.get(FlameMain.DEFAULT_TEMPLATE_PFX, ParticleEffect.class).getControllers().get(0)), spawnSource, scaleInfluencer, velocityInfluencer, new ParticleControllerFinalizerInfluencer());
}

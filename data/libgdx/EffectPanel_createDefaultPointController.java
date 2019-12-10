private ParticleController createDefaultPointController() {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(250);
    emitter.getLife().setHigh(500, 1000);
    emitter.getLife().setTimeline(new float[] { 0, 0.66f, 1 });
    emitter.getLife().setScaling(new float[] { 1, 1, 0.3f });
    emitter.setMaxParticleCount(200);
    // Scale
    ScaleInfluencer scaleInfluencer = new ScaleInfluencer();
    scaleInfluencer.value.setHigh(1);
    // Color
    ColorInfluencer.Single colorInfluencer = new ColorInfluencer.Single();
    colorInfluencer.colorValue.setColors(new float[] { 0.12156863f, 0.047058824f, 1, 0, 0, 0 });
    colorInfluencer.colorValue.setTimeline(new float[] { 0, 1 });
    colorInfluencer.alphaValue.setHigh(1);
    colorInfluencer.alphaValue.setTimeline(new float[] { 0, 0.5f, 0.8f, 1 });
    colorInfluencer.alphaValue.setScaling(new float[] { 0, 0.15f, 0.5f, 0 });
    // Spawn
    PointSpawnShapeValue pointSpawnShapeValue = new PointSpawnShapeValue();
    SpawnInfluencer spawnSource = new SpawnInfluencer(pointSpawnShapeValue);
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
    return new ParticleController("PointSprite Controller", emitter, new PointSpriteRenderer(editor.getPointSpriteBatch()), new RegionInfluencer.Single((Texture) editor.assetManager.get(FlameMain.DEFAULT_BILLBOARD_PARTICLE)), spawnSource, scaleInfluencer, colorInfluencer, velocityInfluencer);
}

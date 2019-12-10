public ParticleController createDefaultTemplateController() {
    // Emission
    RegularEmitter emitter = new RegularEmitter();
    emitter.getDuration().setLow(3000);
    emitter.getEmission().setHigh(90);
    emitter.getLife().setHigh(1000);
    emitter.getLife().setTimeline(new float[] { 0, 0.66f, 1 });
    emitter.getLife().setScaling(new float[] { 1, 1, 0.3f });
    emitter.setMaxParticleCount(100);
    // Spawn
    PointSpawnShapeValue pointSpawnShapeValue = new PointSpawnShapeValue();
    pointSpawnShapeValue.xOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.xOffsetValue.setActive(true);
    pointSpawnShapeValue.yOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.yOffsetValue.setActive(true);
    pointSpawnShapeValue.zOffsetValue.setLow(0, 1f);
    pointSpawnShapeValue.zOffsetValue.setActive(true);
    SpawnInfluencer spawnSource = new SpawnInfluencer(pointSpawnShapeValue);
    ScaleInfluencer scaleInfluencer = new ScaleInfluencer();
    scaleInfluencer.value.setHigh(1f);
    // Color
    ColorInfluencer.Single colorInfluencer = new ColorInfluencer.Single();
    colorInfluencer.colorValue.setColors(new float[] { 1, 0.12156863f, 0.047058824f, 0, 0, 0 });
    colorInfluencer.colorValue.setTimeline(new float[] { 0, 1 });
    colorInfluencer.alphaValue.setHigh(1);
    colorInfluencer.alphaValue.setTimeline(new float[] { 0, 0.5f, 0.8f, 1 });
    colorInfluencer.alphaValue.setScaling(new float[] { 0, 0.15f, 0.5f, 0 });
    return new ParticleController("Billboard Controller", emitter, new BillboardRenderer(editor.getBillboardBatch()), new RegionInfluencer.Single(editor.getTexture()), spawnSource, scaleInfluencer, colorInfluencer);
}

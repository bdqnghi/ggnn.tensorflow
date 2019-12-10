public void create() {
    if (ui != null)
        return;
    int w = Gdx.graphics.getWidth(), h = Gdx.graphics.getHeight();
    modelBatch = new ModelBatch();
    environment = new Environment();
    environment.add(new DirectionalLight().set(Color.WHITE, 0, 0, -1));
    worldCamera = new PerspectiveCamera(67, w, h);
    worldCamera.position.set(10, 10, 10);
    worldCamera.lookAt(0, 0, 0);
    worldCamera.near = 0.1f;
    worldCamera.far = 300f;
    worldCamera.update();
    cameraInputController = new CameraInputController(worldCamera);
    // Batches
    pointSpriteBatch = new PointSpriteParticleBatch();
    pointSpriteBatch.setCamera(worldCamera);
    billboardBatch = new BillboardParticleBatch();
    billboardBatch.setCamera(worldCamera);
    modelInstanceParticleBatch = new ModelInstanceParticleBatch();
    particleSystem.add(billboardBatch);
    particleSystem.add(pointSpriteBatch);
    particleSystem.add(modelInstanceParticleBatch);
    fovValue = new NumericValue();
    fovValue.setValue(67);
    fovValue.setActive(true);
    deltaMultiplier = new NumericValue();
    deltaMultiplier.setValue(1.0f);
    deltaMultiplier.setActive(true);
    backgroundColor = new GradientColorValue();
    Color color = Color.valueOf("878787");
    backgroundColor.setColors(new float[] { color.r, color.g, color.b });
    models = new Array<Model>();
    ModelBuilder builder = new ModelBuilder();
    Model xyzModel = builder.createXYZCoordinates(10, new Material(), Usage.Position | Usage.ColorPacked), planeModel = builder.createLineGrid(10, 10, 1, 1, new Material(ColorAttribute.createDiffuse(Color.WHITE)), Usage.Position);
    models.add(xyzModel);
    models.add(planeModel);
    xyzInstance = new ModelInstance(xyzModel);
    xzPlaneInstance = new ModelInstance(planeModel);
    xyPlaneInstance = new ModelInstance(planeModel);
    xyPlaneInstance.transform.rotate(1f, 0f, 0f, 90f);
    setDrawXYZ(true);
    setDrawXZPlane(true);
    // Load default resources
    ParticleEffectLoader.ParticleEffectLoadParameter params = new ParticleEffectLoader.ParticleEffectLoadParameter(particleSystem.getBatches());
    assetManager.load(DEFAULT_BILLBOARD_PARTICLE, Texture.class);
    assetManager.load(DEFAULT_MODEL_PARTICLE, Model.class);
    assetManager.load(DEFAULT_SKIN, Skin.class);
    assetManager.load(DEFAULT_TEMPLATE_PFX, ParticleEffect.class, params);
    assetManager.finishLoading();
    assetManager.setLoader(ParticleEffect.class, new ParticleEffectLoader(new AbsoluteFileHandleResolver()));
    assetManager.get(DEFAULT_MODEL_PARTICLE, Model.class).materials.get(0).set(new BlendingAttribute(GL20.GL_ONE, GL20.GL_ONE_MINUS_SRC_ALPHA, 1));
    // Ui
    stringBuilder = new StringBuilder();
    Skin skin = assetManager.get(DEFAULT_SKIN, Skin.class);
    ui = new Stage();
    fpsLabel = new Label("", skin);
    pointCountLabel = new Label("", skin);
    billboardCountLabel = new Label("", skin);
    modelInstanceCountLabel = new Label("", skin);
    maxLabel = new Label("", skin);
    playPauseButton = new TextButton("Pause", skin);
    playPauseButton.addListener(new ClickListener() {

        @Override
        public void clicked(InputEvent event, float x, float y) {
            isUpdate = !isUpdate;
            playPauseButton.setText(isUpdate ? "Pause" : "Play");
        }
    });
    Table table = new Table(skin);
    table.setFillParent(true);
    table.pad(5);
    table.add(fpsLabel).expandX().left().row();
    table.add(pointCountLabel).expandX().left().row();
    table.add(billboardCountLabel).expandX().left().row();
    table.add(modelInstanceCountLabel).expandX().left().row();
    table.add(maxLabel).expandX().left().row();
    table.add(playPauseButton).expand().bottom().left().row();
    ui.addActor(table);
    setTexture((Texture) assetManager.get(DEFAULT_BILLBOARD_PARTICLE));
    effectPanel.createDefaultEmitter(ControllerType.Billboard, true, true);
}

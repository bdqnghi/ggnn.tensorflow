public void create() {
    if (spriteBatch != null)
        return;
    spriteBatch = new SpriteBatch();
    worldCamera = new OrthographicCamera();
    textCamera = new OrthographicCamera();
    pixelsPerMeter = new NumericValue();
    pixelsPerMeter.setValue(1.0f);
    pixelsPerMeter.setAlwaysActive(true);
    zoomLevel = new NumericValue();
    zoomLevel.setValue(1.0f);
    zoomLevel.setAlwaysActive(true);
    deltaMultiplier = new NumericValue();
    deltaMultiplier.setValue(1.0f);
    deltaMultiplier.setAlwaysActive(true);
    backgroundColor = new GradientColorValue();
    backgroundColor.setColors(new float[] { 0f, 0f, 0f });
    font = new BitmapFont(Gdx.files.getFileHandle("default.fnt", FileType.Internal), Gdx.files.getFileHandle("default.png", FileType.Internal), true);
    effectPanel.newExampleEmitter("Untitled", true);
    // if (resources.openFile("/editor-bg.png") != null) bgImage = new Image(gl, "/editor-bg.png");
    Gdx.input.setInputProcessor(this);
}

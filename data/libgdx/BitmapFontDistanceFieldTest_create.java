@Override
public void create() {
    camera = new OrthographicCamera();
    spriteBatch = new SpriteBatch();
    descriptionFont = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), true);
    descriptionFont.setColor(Color.RED);
    regularTexture = new Texture(Gdx.files.internal("data/verdana39.png"), true);
    regularFont = new BitmapFont(Gdx.files.internal("data/verdana39.fnt"), new TextureRegion(regularTexture), true);
    regularFont.setColor(COLOR);
    distanceFieldTexture = new Texture(Gdx.files.internal("data/verdana39distancefield.png"), true);
    distanceFieldFont = new BitmapFont(Gdx.files.internal("data/verdana39distancefield.fnt"), new TextureRegion(distanceFieldTexture), true);
    distanceFieldFont.setColor(COLOR);
    distanceFieldShader = new DistanceFieldShader();
    // Useful when debugging this test
    ShaderProgram.pedantic = false;
}

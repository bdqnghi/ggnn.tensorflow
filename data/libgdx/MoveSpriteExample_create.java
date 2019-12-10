public void create() {
    // create a SpriteBatch with which to render the sprite
    batch = new SpriteBatch();
    // load the sprite's texture. note: usually you have more than
    // one sprite in a texture, see {@see TextureAtlas} and {@see TextureRegion}.
    texture = new Texture(Gdx.files.internal("data/bobargb8888-32x32.png"));
    // create an {@link OrthographicCamera} which is used to transform
    // touch coordinates to world coordinates.
    camera = new OrthographicCamera();
    // we want the camera to setup a viewport with pixels as units, with the
    // y-axis pointing upwards. The origin will be in the lower left corner
    // of the screen.
    camera.setToOrtho(false);
}

@Override
public void create() {
    // a bitmap font to draw some text, note that we
    // pass true to the constructor, which flips glyphs on y
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), true);
    // a texture region, note the flipping on y again
    region = new TextureRegion(new Texture("data/badlogic.jpg"));
    region.flip(false, true);
    // a texture atlas, note the boolean
    atlas = new TextureAtlas(Gdx.files.internal("data/pack"), true);
    // a sprite, created from a region in the atlas
    sprite = atlas.createSprite("badlogicsmall");
    sprite.setPosition(0, 0);
    // a sprite batch with which we want to render
    batch = new SpriteBatch();
    // a camera, note the setToOrtho call, which will set the y-axis
    // to point downwards
    camera = new OrthographicCamera();
    camera.setToOrtho(true);
    // a stage which uses our y-down camera and a simple actor (see MyActor below),
    // which uses the flipped region. The key here is to
    // set our y-down camera on the stage, the rest is just for demo purposes.
    stage = new Stage();
    stage.getViewport().setCamera(camera);
    image = new MyActor(region);
    image.setPosition(100, 100);
    stage.addActor(image);
    // finally we write up the stage as the input process and call it a day.
    Gdx.input.setInputProcessor(stage);
}

@Override
public void create() {
    // create a stage and a camera controller so we can pan the view.
    stage = new Stage();
    ;
    // we know it's an ortho cam at this point!
    camController = new OrthoCamController((OrthographicCamera) stage.getCamera());
    Gdx.input.setInputProcessor(camController);
    // load a dummy texture
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    // populate the stage with some actors and groups.
    for (int i = 0; i < 5000; i++) {
        Actor img = new CullableActor("img" + i, texture, (OrthographicCamera) stage.getCamera());
        img.setX((float) Math.random() * 480 * 10);
        img.setY((float) Math.random() * 320 * 10);
        stage.addActor(img);
    }
    // we also want to output the number of visible actors, so we need a SpriteBatch and a BitmapFont
    batch = new SpriteBatch();
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
}

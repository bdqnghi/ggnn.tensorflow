@Override
public void create() {
    batch = new SpriteBatch();
    font = new BitmapFont();
    tex = new Texture(Gdx.files.internal("data/badlogic.jpg"));
    DisplayMode[] modes = Gdx.graphics.getDisplayModes();
    for (DisplayMode mode : modes) {
        System.out.println(mode);
    }
    Gdx.app.log("FullscreenTest", Gdx.graphics.getBufferFormat().toString());
}

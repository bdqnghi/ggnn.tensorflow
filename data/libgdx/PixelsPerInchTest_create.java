@Override
public void create() {
    font = new BitmapFont(Gdx.files.internal("data/arial-15.fnt"), false);
    batch = new SpriteBatch();
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
}

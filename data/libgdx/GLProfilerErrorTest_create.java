@Override
public void create() {
    batch = new SpriteBatch();
    font = new BitmapFont();
    Gdx.input.setInputProcessor(this);
}

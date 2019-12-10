@Override
public void create() {
    spriteBatch = new SpriteBatch();
    texture = new Texture(Gdx.files.internal("data/badlogicsmall.jpg"));
    Pixmap pixmap = new Pixmap(32, 32, Format.RGB565);
    pixmap.setColor(1, 1, 0, 0.7f);
    pixmap.fill();
    texture2 = new Texture(pixmap);
    pixmap.dispose();
    for (int i = 0; i < coords.length; i += 2) {
        coords[i] = (int) (Math.random() * Gdx.graphics.getWidth());
        coords[i + 1] = (int) (Math.random() * Gdx.graphics.getHeight());
        coords2[i] = (int) (Math.random() * Gdx.graphics.getWidth());
        coords2[i + 1] = (int) (Math.random() * Gdx.graphics.getHeight());
    }
}

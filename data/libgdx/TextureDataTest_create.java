public void create() {
    spriteBatch = new SpriteBatch();
    // texture = new Texture(new PixmapTextureData(new Pixmap(Gdx.files.internal("data/t8890.png")), null, false, true));
    texture = new Texture(new FileTextureData(Gdx.files.internal("data/t8890.png"), null, null, false));
}

@Override
public void create() {
    Pixmap pixmap = new Pixmap(256, 256, Format.RGBA8888);
    pixmap.setColor(1, 0, 0, 1);
    pixmap.fill();
    texture = new Texture(pixmap, false);
    texture.setFilter(TextureFilter.Linear, TextureFilter.Linear);
    batch = new SpriteBatch();
    pixmap.dispose();
}

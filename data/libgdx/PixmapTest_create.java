public void create() {
    // Create an empty dynamic pixmap
    // Pixmap.Format.RGBA8888);
    pixmap = new Pixmap(800, 480, Pixmap.Format.RGBA8888);
    // Create a texture to contain the pixmap
    // Pixmap.Format.RGBA8888);
    texture = new Texture(1024, 1024, Pixmap.Format.RGBA8888);
    texture.setFilter(Texture.TextureFilter.Nearest, Texture.TextureFilter.Linear);
    texture.setWrap(Texture.TextureWrap.ClampToEdge, Texture.TextureWrap.ClampToEdge);
    // Red
    pixmap.setColor(1.0f, 0.0f, 0.0f, 1.0f);
    pixmap.drawLine(0, 0, 100, 100);
    // Blue
    pixmap.setColor(0.0f, 0.0f, 1.0f, 1.0f);
    pixmap.drawLine(100, 100, 200, 0);
    // Green
    pixmap.setColor(0.0f, 1.0f, 0.0f, 1.0f);
    pixmap.drawLine(100, 0, 100, 100);
    // White
    pixmap.setColor(1.0f, 1.0f, 1.0f, 1.0f);
    pixmap.drawCircle(400, 300, 100);
    // Blit the composited overlay to a texture
    texture.draw(pixmap, 0, 0);
    region = new TextureRegion(texture, 0, 0, 800, 480);
    batch = new SpriteBatch();
    Pixmap pixmap = new Pixmap(512, 1024, Pixmap.Format.RGBA8888);
    for (int y = 0; y < pixmap.getHeight(); y++) {
        // 1024
        for (int x = 0; x < pixmap.getWidth(); x++) {
            // 512
            pixmap.getPixel(x, y);
        }
    }
    pixmap.dispose();
}

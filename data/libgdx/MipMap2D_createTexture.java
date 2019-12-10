private void createTexture() {
    Pixmap pixmap = new Pixmap(256, 256, Format.RGB565);
    boolean useRed = true;
    for (int y = 0; y < 256; y += 8) {
        for (int x = 0; x < 256; x += 8) {
            pixmap.setColor(useRed ? 1 : 0, 0, useRed ? 0 : 1, 1);
            pixmap.fillRectangle(x, y, 8, 8);
            useRed = !useRed;
        }
        useRed = !useRed;
    }
    texture = new Texture(pixmap, true);
    texture.setFilter(TextureFilter.MipMapLinearLinear, TextureFilter.Linear);
}

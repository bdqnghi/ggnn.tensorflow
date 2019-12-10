private void createTexture() {
    Pixmap pixmap = new Pixmap(256, 256, Format.RGBA8888);
    pixmap.setColor(1, 1, 1, 1);
    pixmap.fill();
    pixmap.setColor(0, 0, 0, 1);
    pixmap.drawLine(0, 0, 256, 256);
    pixmap.drawLine(256, 0, 0, 256);
    texture = new Texture(pixmap);
    pixmap.dispose();
    pixmap = new Pixmap(256, 256, Format.RGBA8888);
    pixmap.setColor(1, 1, 1, 1);
    pixmap.fill();
    pixmap.setColor(0, 0, 0, 1);
    pixmap.drawLine(128, 0, 128, 256);
    texture2 = new Texture(pixmap);
    pixmap.dispose();
}

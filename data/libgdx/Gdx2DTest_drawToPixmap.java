void drawToPixmap(Gdx2DPixmap pixmap) {
    pixmap.clear(Color.rgba8888(1, 0, 0, 0.1f));
    pixmap.setPixel(16, 16, Color.rgba8888(0, 0, 1, 1));
    int clearColor = 0;
    int pixelColor = 0;
    switch(pixmap.getFormat()) {
        case Gdx2DPixmap.GDX2D_FORMAT_ALPHA:
            clearColor = Color.rgba8888(1, 1, 1, 0.1f);
            pixelColor = Color.rgba8888(1, 1, 1, 1);
            break;
        case Gdx2DPixmap.GDX2D_FORMAT_LUMINANCE_ALPHA:
            // Color.rgba8888(1, 1, 1, 0.1f);
            clearColor = 0x36363619;
            pixelColor = 0xffffff12;
            break;
        case Gdx2DPixmap.GDX2D_FORMAT_RGB565:
            clearColor = Color.rgba8888(1, 0, 0, 1);
            pixelColor = Color.rgba8888(0, 0, 1, 1);
            break;
        case Gdx2DPixmap.GDX2D_FORMAT_RGB888:
            clearColor = Color.rgba8888(1, 0, 0, 1);
            pixelColor = Color.rgba8888(0, 0, 1, 1);
            break;
        case Gdx2DPixmap.GDX2D_FORMAT_RGBA4444:
            clearColor = 0xff000011;
            pixelColor = Color.rgba8888(0, 0, 1, 1);
            break;
        case Gdx2DPixmap.GDX2D_FORMAT_RGBA8888:
            clearColor = Color.rgba8888(1, 0, 0, 0.1f);
            pixelColor = Color.rgba8888(0, 0, 1, 1);
    }
    if (pixmap.getPixel(15, 16) != clearColor)
        throw new RuntimeException("error clear: " + pixmap.getFormatString());
    if (pixmap.getPixel(16, 16) != pixelColor)
        throw new RuntimeException("error pixel: " + pixmap.getFormatString());
    pixmap.drawLine(0, 0, 31, 31, Color.rgba8888(1, 1, 1, 1));
    pixmap.drawRect(10, 10, 5, 7, Color.rgba8888(1, 1, 0, 0.5f));
    pixmap.fillRect(20, 10, 5, 7, Color.rgba8888(0, 1, 1, 0.5f));
    pixmap.drawCircle(16, 16, 10, Color.rgba8888(1, 0, 1, 1));
    pixmap.fillCircle(16, 16, 6, Color.rgba8888(0, 1, 0, 0.5f));
    pixmap.fillTriangle(16, 16, 18, 18, 20, 14, Color.rgba8888(0, 0.5f, 0, 0.5f));
    pixmap.drawLine(0, -1, 0, 0, Color.rgba8888(1, 1, 0, 1));
    pixmap.drawLine(41, -10, 31, 0, Color.rgba8888(1, 1, 0, 1));
    pixmap.drawLine(10, 41, 0, 31, Color.rgba8888(0, 1, 1, 1));
    pixmap.drawLine(41, 41, 31, 31, Color.rgba8888(0, 1, 1, 1));
    pixmap.drawRect(-10, -10, 20, 20, Color.rgba8888(0, 1, 1, 1));
    pixmap.drawRect(21, -10, 20, 20, Color.rgba8888(0, 1, 1, 1));
    pixmap.drawRect(-10, 21, 20, 20, Color.rgba8888(0, 1, 1, 1));
    pixmap.drawRect(21, 21, 20, 20, Color.rgba8888(0, 1, 1, 1));
    pixmap.fillRect(-10, -10, 20, 20, Color.rgba8888(0, 1, 1, 0.5f));
    pixmap.fillRect(21, -10, 20, 20, Color.rgba8888(0, 1, 1, 0.5f));
    pixmap.fillRect(-10, 21, 20, 20, Color.rgba8888(0, 1, 1, 0.5f));
    pixmap.fillRect(21, 21, 20, 20, Color.rgba8888(0, 1, 1, 0.5f));
}

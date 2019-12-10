Gdx2DPixmap[] testPixmaps() {
    int[] formats = { Gdx2DPixmap.GDX2D_FORMAT_ALPHA, Gdx2DPixmap.GDX2D_FORMAT_LUMINANCE_ALPHA, Gdx2DPixmap.GDX2D_FORMAT_RGB565, Gdx2DPixmap.GDX2D_FORMAT_RGB888, Gdx2DPixmap.GDX2D_FORMAT_RGBA4444, Gdx2DPixmap.GDX2D_FORMAT_RGBA8888 };
    Gdx2DPixmap[] pixmaps = new Gdx2DPixmap[formats.length];
    for (int i = 0; i < pixmaps.length; i++) {
        Gdx2DPixmap pixmap = new Gdx2DPixmap(64, 32, formats[i]);
        drawToPixmap(pixmap);
        pixmaps[i] = pixmap;
    }
    return pixmaps;
}

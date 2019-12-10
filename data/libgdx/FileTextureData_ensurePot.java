private Pixmap ensurePot(Pixmap pixmap) {
    if (Gdx.gl20 == null && copyToPOT) {
        int pixmapWidth = pixmap.getWidth();
        int pixmapHeight = pixmap.getHeight();
        int potWidth = MathUtils.nextPowerOfTwo(pixmapWidth);
        int potHeight = MathUtils.nextPowerOfTwo(pixmapHeight);
        if (pixmapWidth != potWidth || pixmapHeight != potHeight) {
            Pixmap tmp = new Pixmap(potWidth, potHeight, pixmap.getFormat());
            tmp.drawPixmap(pixmap, 0, 0, 0, 0, pixmapWidth, pixmapHeight);
            pixmap.dispose();
            return tmp;
        }
    }
    return pixmap;
}

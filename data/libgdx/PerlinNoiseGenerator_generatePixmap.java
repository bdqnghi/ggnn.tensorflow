public static Pixmap generatePixmap(int width, int height, int min, int max, int octaveCount) {
    byte[] bytes = generateHeightMap(width, height, min, max, octaveCount);
    Pixmap pixmap = new Pixmap(width, height, Format.RGBA8888);
    for (int i = 0, idx = 0; i < bytes.length; i++) {
        byte val = bytes[i];
        pixmap.getPixels().put(idx++, val);
        pixmap.getPixels().put(idx++, val);
        pixmap.getPixels().put(idx++, val);
        pixmap.getPixels().put(idx++, (byte) 255);
    }
    return pixmap;
}

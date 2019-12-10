static private void copy(BufferedImage src, int x, int y, int w, int h, BufferedImage dst, int dx, int dy, boolean rotated) {
    if (rotated) {
        for (int i = 0; i < w; i++) for (int j = 0; j < h; j++) plot(dst, dx + j, dy + w - i - 1, src.getRGB(x + i, y + j));
    } else {
        for (int i = 0; i < w; i++) for (int j = 0; j < h; j++) plot(dst, dx + i, dy + j, src.getRGB(x + i, y + j));
    }
}

static private void plot(BufferedImage dst, int x, int y, int argb) {
    if (0 <= x && x < dst.getWidth() && 0 <= y && y < dst.getHeight())
        dst.setRGB(x, y, argb);
}

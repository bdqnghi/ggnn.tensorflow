public void glReadPixels(int x, int y, int width, int height, int format, int type, Buffer pixels) {
    GL.glReadPixels(x, y, width, height, format, type, pixels, getPosition(pixels));
}

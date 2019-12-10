public void glTexSubImage2D(int target, int level, int xoffset, int yoffset, int width, int height, int format, int type, Buffer pixels) {
    GL.glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels, getPosition(pixels));
}

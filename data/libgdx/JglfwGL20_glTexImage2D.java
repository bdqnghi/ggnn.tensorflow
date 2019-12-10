public void glTexImage2D(int target, int level, int internalFormat, int width, int height, int border, int format, int type, Buffer pixels) {
    GL.glTexImage2D(target, level, internalFormat, width, height, border, format, type, pixels, getPosition(pixels));
}

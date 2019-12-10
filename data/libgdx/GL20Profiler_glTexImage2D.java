@Override
public void glTexImage2D(int target, int level, int internalformat, int width, int height, int border, int format, int type, Buffer pixels) {
    calls++;
    gl20.glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    check();
}

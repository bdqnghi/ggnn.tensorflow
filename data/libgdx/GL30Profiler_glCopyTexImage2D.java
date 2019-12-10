@Override
public void glCopyTexImage2D(int target, int level, int internalformat, int x, int y, int width, int height, int border) {
    calls++;
    gl30.glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
    check();
}

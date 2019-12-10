@Override
public void glCopyTexImage2D(int target, int level, int internalformat, int x, int y, int width, int height, int border) {
    gl.copyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

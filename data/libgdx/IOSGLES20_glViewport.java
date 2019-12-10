public void glViewport(int x, int y, int width, int height) {
    IOSGLES20.x = x;
    IOSGLES20.y = y;
    IOSGLES20.width = width;
    IOSGLES20.height = height;
    glViewportJni(x, y, width, height);
}

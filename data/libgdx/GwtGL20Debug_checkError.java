private void checkError() {
    int error = 0;
    if ((error = gl.getError()) != GL_NO_ERROR) {
        throw new GdxRuntimeException("GL error: " + error + ", " + Integer.toHexString(error));
    }
}

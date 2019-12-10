public void initiateGLInstances() {
    if (usingGL30) {
        gl30 = new LwjglGL30();
        gl20 = gl30;
    } else {
        gl20 = new LwjglGL20();
    }
    if (!isOpenGLOrHigher(2, 0))
        throw new GdxRuntimeException("OpenGL 2.0 or higher with the FBO extension is required. OpenGL version: " + GL11.glGetString(GL11.GL_VERSION) + "\n" + glInfo());
    if (!supportsFBO()) {
        throw new GdxRuntimeException("OpenGL 2.0 or higher with the FBO extension is required. OpenGL version: " + GL11.glGetString(GL11.GL_VERSION) + ", FBO extension: false\n" + glInfo());
    }
    Gdx.gl = gl20;
    Gdx.gl20 = gl20;
    Gdx.gl30 = gl30;
}

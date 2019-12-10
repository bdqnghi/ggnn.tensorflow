/**
 * This instantiates the GL10, GL11 and GL20 instances. Includes the check for certain devices that pretend to support GL11 but
 * fuck up vertex buffer objects. This includes the pixelflinger which segfaults when buffers are deleted as well as the
 * Motorola CLIQ and the Samsung Behold II.
 *
 * @param gl
 */
private void setupGL(javax.microedition.khronos.opengles.GL10 gl) {
    if (gl20 != null)
        return;
    gl20 = new AndroidGL20();
    Gdx.gl = gl20;
    Gdx.gl20 = gl20;
    Gdx.app.log(LOG_TAG, "OGL renderer: " + gl.glGetString(GL10.GL_RENDERER));
    Gdx.app.log(LOG_TAG, "OGL vendor: " + gl.glGetString(GL10.GL_VENDOR));
    Gdx.app.log(LOG_TAG, "OGL version: " + gl.glGetString(GL10.GL_VERSION));
    Gdx.app.log(LOG_TAG, "OGL extensions: " + gl.glGetString(GL10.GL_EXTENSIONS));
}

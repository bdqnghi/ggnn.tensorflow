/**
 * Destroys the OpenGL Texture as specified by the glHandle.
 */
protected void delete() {
    if (glHandle != 0) {
        Gdx.gl.glDeleteTexture(glHandle);
        glHandle = 0;
    }
}

/**
 * Unbinds the framebuffer, all drawing will be performed to the normal framebuffer from here on.
 */
public static void unbind() {
    Gdx.gl20.glBindFramebuffer(GL20.GL_FRAMEBUFFER, defaultFramebufferHandle);
}

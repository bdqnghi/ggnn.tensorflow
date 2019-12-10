/**
 * Makes the frame buffer current so everything gets drawn to it.
 */
public void bind() {
    Gdx.gl20.glBindFramebuffer(GL20.GL_FRAMEBUFFER, framebufferHandle);
}

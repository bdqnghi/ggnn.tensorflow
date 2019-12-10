/**
 * Releases all resources associated with the FrameBuffer.
 */
@Override
public void dispose() {
    GL20 gl = Gdx.gl20;
    disposeColorTexture(colorTexture);
    if (hasDepthStencilPackedBuffer) {
        gl.glDeleteRenderbuffer(depthStencilPackedBufferHandle);
    } else {
        if (hasDepth)
            gl.glDeleteRenderbuffer(depthbufferHandle);
        if (hasStencil)
            gl.glDeleteRenderbuffer(stencilbufferHandle);
    }
    gl.glDeleteFramebuffer(framebufferHandle);
    if (buffers.get(Gdx.app) != null)
        buffers.get(Gdx.app).removeValue(this, true);
}

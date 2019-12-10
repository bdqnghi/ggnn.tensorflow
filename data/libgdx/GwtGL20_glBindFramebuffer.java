@Override
public void glBindFramebuffer(int target, int framebuffer) {
    gl.bindFramebuffer(target, frameBuffers.get(framebuffer));
}

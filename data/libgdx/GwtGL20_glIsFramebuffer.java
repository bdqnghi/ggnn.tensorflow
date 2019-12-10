@Override
public boolean glIsFramebuffer(int framebuffer) {
    return gl.isFramebuffer(frameBuffers.get(framebuffer));
}

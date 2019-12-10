@Override
public void glDeleteFramebuffer(int framebuffer) {
    calls++;
    gl20.glDeleteFramebuffer(framebuffer);
    check();
}

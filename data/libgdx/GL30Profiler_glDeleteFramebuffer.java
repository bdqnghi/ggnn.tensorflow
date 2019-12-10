@Override
public void glDeleteFramebuffer(int framebuffer) {
    calls++;
    gl30.glDeleteFramebuffer(framebuffer);
    check();
}

@Override
public boolean glIsFramebuffer(int framebuffer) {
    calls++;
    boolean result = gl20.glIsFramebuffer(framebuffer);
    check();
    return result;
}

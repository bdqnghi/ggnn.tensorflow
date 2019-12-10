@Override
public boolean glIsFramebuffer(int framebuffer) {
    calls++;
    boolean result = gl30.glIsFramebuffer(framebuffer);
    check();
    return result;
}

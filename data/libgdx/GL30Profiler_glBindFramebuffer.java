@Override
public void glBindFramebuffer(int target, int framebuffer) {
    calls++;
    gl30.glBindFramebuffer(target, framebuffer);
    check();
}

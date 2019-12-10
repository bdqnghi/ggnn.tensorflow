@Override
public void glBindFramebuffer(int target, int framebuffer) {
    calls++;
    gl20.glBindFramebuffer(target, framebuffer);
    check();
}

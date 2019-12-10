@Override
public void glBindFramebuffer(int target, int framebuffer) {
    super.glBindFramebuffer(target, framebuffer);
    checkError();
}

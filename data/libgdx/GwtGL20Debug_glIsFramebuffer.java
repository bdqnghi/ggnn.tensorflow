@Override
public boolean glIsFramebuffer(int framebuffer) {
    boolean res = super.glIsFramebuffer(framebuffer);
    checkError();
    return res;
}

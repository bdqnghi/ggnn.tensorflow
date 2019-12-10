@Override
public void glDeleteFramebuffers(int n, IntBuffer framebuffers) {
    calls++;
    gl30.glDeleteFramebuffers(n, framebuffers);
    check();
}

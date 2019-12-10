@Override
public void glDeleteFramebuffers(int n, IntBuffer framebuffers) {
    calls++;
    gl20.glDeleteFramebuffers(n, framebuffers);
    check();
}

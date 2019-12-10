@Override
public void glDeleteFramebuffers(int n, IntBuffer framebuffers) {
    super.glDeleteFramebuffers(n, framebuffers);
    checkError();
}

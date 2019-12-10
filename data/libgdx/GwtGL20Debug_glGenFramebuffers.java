@Override
public void glGenFramebuffers(int n, IntBuffer framebuffers) {
    super.glGenFramebuffers(n, framebuffers);
    checkError();
}

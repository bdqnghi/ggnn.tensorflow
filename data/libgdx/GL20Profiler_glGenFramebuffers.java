@Override
public void glGenFramebuffers(int n, IntBuffer framebuffers) {
    calls++;
    gl20.glGenFramebuffers(n, framebuffers);
    check();
}

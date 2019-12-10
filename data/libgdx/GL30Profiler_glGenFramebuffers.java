@Override
public void glGenFramebuffers(int n, IntBuffer framebuffers) {
    calls++;
    gl30.glGenFramebuffers(n, framebuffers);
    check();
}

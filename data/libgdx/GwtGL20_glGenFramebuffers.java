@Override
public void glGenFramebuffers(int n, IntBuffer framebuffers) {
    for (int i = 0; i < n; i++) {
        WebGLFramebuffer fb = gl.createFramebuffer();
        int id = allocateFrameBufferId(fb);
        framebuffers.put(id);
    }
}

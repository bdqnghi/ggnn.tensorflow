@Override
public void glGenRenderbuffers(int n, IntBuffer renderbuffers) {
    for (int i = 0; i < n; i++) {
        WebGLRenderbuffer rb = gl.createRenderbuffer();
        int id = allocateRenderBufferId(rb);
        renderbuffers.put(id);
    }
}

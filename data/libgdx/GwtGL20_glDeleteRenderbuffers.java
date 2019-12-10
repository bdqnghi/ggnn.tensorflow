@Override
public void glDeleteRenderbuffers(int n, IntBuffer renderbuffers) {
    for (int i = 0; i < n; i++) {
        int id = renderbuffers.get();
        WebGLRenderbuffer rb = this.renderBuffers.get(id);
        deallocateRenderBufferId(id);
        gl.deleteRenderbuffer(rb);
    }
}

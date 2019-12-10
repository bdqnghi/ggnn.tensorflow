@Override
public void glDeleteBuffers(int n, IntBuffer buffers) {
    for (int i = 0; i < n; i++) {
        int id = buffers.get();
        WebGLBuffer buffer = this.buffers.get(id);
        deallocateBufferId(id);
        gl.deleteBuffer(buffer);
    }
}

@Override
public void glGenBuffers(int n, IntBuffer buffers) {
    for (int i = 0; i < n; i++) {
        WebGLBuffer buffer = gl.createBuffer();
        int id = allocateBufferId(buffer);
        buffers.put(id);
    }
}

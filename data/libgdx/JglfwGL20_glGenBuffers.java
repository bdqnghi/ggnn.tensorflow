public void glGenBuffers(int n, IntBuffer buffers) {
    GL.glGenBuffers(n, buffers, getPosition(buffers));
}

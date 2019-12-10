public void glDeleteBuffers(int n, IntBuffer buffers) {
    GL.glDeleteBuffers(n, buffers, getPosition(buffers));
}

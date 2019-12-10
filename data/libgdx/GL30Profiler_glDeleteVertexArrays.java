@Override
public void glDeleteVertexArrays(int n, IntBuffer arrays) {
    calls++;
    gl30.glDeleteVertexArrays(n, arrays);
    check();
}

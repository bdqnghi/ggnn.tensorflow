@Override
public void glGenBuffers(int n, IntBuffer buffers) {
    calls++;
    gl20.glGenBuffers(n, buffers);
    check();
}

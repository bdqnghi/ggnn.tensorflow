@Override
public void glGenBuffers(int n, IntBuffer buffers) {
    calls++;
    gl30.glGenBuffers(n, buffers);
    check();
}

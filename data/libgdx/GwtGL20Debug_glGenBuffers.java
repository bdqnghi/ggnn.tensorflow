@Override
public void glGenBuffers(int n, IntBuffer buffers) {
    super.glGenBuffers(n, buffers);
    checkError();
}

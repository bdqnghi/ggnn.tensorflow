@Override
public void glGenVertexArrays(int n, IntBuffer arrays) {
    calls++;
    gl30.glGenVertexArrays(n, arrays);
    check();
}

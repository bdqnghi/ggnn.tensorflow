@Override
public void glGenQueries(int n, IntBuffer ids) {
    calls++;
    gl30.glGenQueries(n, ids);
    check();
}

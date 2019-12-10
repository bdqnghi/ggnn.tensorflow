@Override
public void glDeleteQueries(int n, IntBuffer ids) {
    calls++;
    gl30.glDeleteQueries(n, ids);
    check();
}

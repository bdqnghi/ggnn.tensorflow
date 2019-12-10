@Override
public void glDeleteQueries(int n, IntBuffer ids) {
    for (int i = 0; i < n; i++) {
        GL15.glDeleteQueries(ids.get());
    }
}

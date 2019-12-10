@Override
public void glGenQueries(int n, IntBuffer ids) {
    for (int i = 0; i < n; i++) {
        ids.put(GL15.glGenQueries());
    }
}

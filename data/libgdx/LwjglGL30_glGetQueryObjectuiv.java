@Override
public void glGetQueryObjectuiv(int id, int pname, IntBuffer params) {
    GL15.glGetQueryObjectu(id, pname, params);
}

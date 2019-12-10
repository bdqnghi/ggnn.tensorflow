@Override
public void glGetQueryObjectuiv(int id, int pname, IntBuffer params) {
    calls++;
    gl30.glGetQueryObjectuiv(id, pname, params);
    check();
}

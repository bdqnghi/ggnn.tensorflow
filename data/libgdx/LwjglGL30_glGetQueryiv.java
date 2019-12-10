@Override
public void glGetQueryiv(int target, int pname, IntBuffer params) {
    GL15.glGetQuery(target, pname, params);
}

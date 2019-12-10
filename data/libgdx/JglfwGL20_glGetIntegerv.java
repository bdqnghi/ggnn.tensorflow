public void glGetIntegerv(int pname, IntBuffer params) {
    GL.glGetIntegerv(pname, params, getPosition(params));
}

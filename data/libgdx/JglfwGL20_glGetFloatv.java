public void glGetFloatv(int pname, FloatBuffer params) {
    GL.glGetFloatv(pname, params, getPosition(params));
}

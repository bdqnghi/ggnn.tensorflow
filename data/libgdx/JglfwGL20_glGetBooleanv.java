public void glGetBooleanv(int pname, Buffer params) {
    GL.glGetBooleanv(pname, params, getPosition(params));
}

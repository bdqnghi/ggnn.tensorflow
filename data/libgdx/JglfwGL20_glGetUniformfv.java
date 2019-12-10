public void glGetUniformfv(int program, int location, FloatBuffer params) {
    GL.glGetUniformfv(program, location, params, getPosition(params));
}

public void glGetUniformfv(int program, int location, FloatBuffer params) {
    GL20.glGetUniform(program, location, params);
}

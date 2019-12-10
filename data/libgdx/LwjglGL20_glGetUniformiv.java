public void glGetUniformiv(int program, int location, IntBuffer params) {
    GL20.glGetUniform(program, location, params);
}

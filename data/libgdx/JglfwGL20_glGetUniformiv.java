public void glGetUniformiv(int program, int location, IntBuffer params) {
    GL.glGetUniformiv(program, location, params, getPosition(params));
}

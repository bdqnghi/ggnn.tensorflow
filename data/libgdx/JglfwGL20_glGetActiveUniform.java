public String glGetActiveUniform(int program, int index, IntBuffer size, Buffer type) {
    return GL.glGetActiveUniform(program, index, size, getPosition(size), type, getPosition(type));
}

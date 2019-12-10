public String glGetActiveAttrib(int program, int index, IntBuffer size, Buffer type) {
    return GL.glGetActiveAttrib(program, index, size, getPosition(size), type, getPosition(type));
}

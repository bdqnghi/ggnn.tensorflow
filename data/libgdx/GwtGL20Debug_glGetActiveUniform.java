@Override
public String glGetActiveUniform(int program, int index, IntBuffer size, Buffer type) {
    String uniform = super.glGetActiveUniform(program, index, size, type);
    checkError();
    return uniform;
}

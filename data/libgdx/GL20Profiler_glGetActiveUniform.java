@Override
public String glGetActiveUniform(int program, int index, IntBuffer size, Buffer type) {
    calls++;
    String result = gl20.glGetActiveUniform(program, index, size, type);
    check();
    return result;
}

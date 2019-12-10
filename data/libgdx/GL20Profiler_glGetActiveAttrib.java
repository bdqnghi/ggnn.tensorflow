@Override
public String glGetActiveAttrib(int program, int index, IntBuffer size, Buffer type) {
    calls++;
    String result = gl20.glGetActiveAttrib(program, index, size, type);
    check();
    return result;
}

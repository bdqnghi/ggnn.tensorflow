@Override
public String glGetActiveAttrib(int program, int index, IntBuffer size, Buffer type) {
    calls++;
    String result = gl30.glGetActiveAttrib(program, index, size, type);
    check();
    return result;
}

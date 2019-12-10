@Override
public String glGetActiveAttrib(int program, int index, IntBuffer size, Buffer type) {
    String attrib = super.glGetActiveAttrib(program, index, size, type);
    checkError();
    return attrib;
}

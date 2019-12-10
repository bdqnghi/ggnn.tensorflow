@Override
public String glGetActiveAttrib(int program, int index, IntBuffer size, Buffer type) {
    WebGLActiveInfo activeAttrib = gl.getActiveAttrib(programs.get(program), index);
    size.put(activeAttrib.getSize());
    ((IntBuffer) type).put(activeAttrib.getType());
    return activeAttrib.getName();
}

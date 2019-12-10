@Override
public String glGetActiveUniform(int program, int index, IntBuffer size, Buffer type) {
    WebGLActiveInfo activeUniform = gl.getActiveUniform(programs.get(program), index);
    size.put(activeUniform.getSize());
    ((IntBuffer) type).put(activeUniform.getType());
    return activeUniform.getName();
}

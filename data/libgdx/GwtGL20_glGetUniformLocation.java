@Override
public int glGetUniformLocation(int program, String name) {
    WebGLUniformLocation location = gl.getUniformLocation(programs.get(program), name);
    return allocateUniformLocationId(program, location);
}

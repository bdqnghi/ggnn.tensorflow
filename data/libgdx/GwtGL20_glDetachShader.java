@Override
public void glDetachShader(int program, int shader) {
    gl.detachShader(programs.get(program), shaders.get(shader));
}

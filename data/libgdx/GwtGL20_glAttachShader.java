@Override
public void glAttachShader(int program, int shader) {
    WebGLProgram glProgram = programs.get(program);
    WebGLShader glShader = shaders.get(shader);
    gl.attachShader(glProgram, glShader);
}

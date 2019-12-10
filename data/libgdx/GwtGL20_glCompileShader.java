@Override
public void glCompileShader(int shader) {
    WebGLShader glShader = shaders.get(shader);
    gl.compileShader(glShader);
}

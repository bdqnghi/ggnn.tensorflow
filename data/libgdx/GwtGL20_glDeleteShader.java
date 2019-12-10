@Override
public void glDeleteShader(int shader) {
    WebGLShader sh = shaders.get(shader);
    deallocateShaderId(shader);
    gl.deleteShader(sh);
}

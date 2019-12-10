@Override
public int glCreateShader(int type) {
    WebGLShader shader = gl.createShader(type);
    return allocateShaderId(shader);
}

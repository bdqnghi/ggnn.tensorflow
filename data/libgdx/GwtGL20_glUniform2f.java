@Override
public void glUniform2f(int location, float x, float y) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform2f(loc, x, y);
}

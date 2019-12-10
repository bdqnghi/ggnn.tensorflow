@Override
public void glUniform1f(int location, float x) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform1f(loc, x);
}

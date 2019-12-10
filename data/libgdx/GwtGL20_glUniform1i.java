@Override
public void glUniform1i(int location, int x) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform1i(loc, x);
}

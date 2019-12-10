@Override
public void glUniform2i(int location, int x, int y) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform2i(loc, x, y);
}

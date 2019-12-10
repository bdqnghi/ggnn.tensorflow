@Override
public void glUniform4i(int location, int x, int y, int z, int w) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform4i(loc, x, y, z, w);
}

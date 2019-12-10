@Override
public void glUniform3i(int location, int x, int y, int z) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform3i(loc, x, y, z);
}

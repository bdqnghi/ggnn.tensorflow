@Override
public void glUniform4f(int location, float x, float y, float z, float w) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform4f(loc, x, y, z, w);
}

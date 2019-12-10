@Override
public void glUniform3f(int location, float x, float y, float z) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform3f(loc, x, y, z);
}

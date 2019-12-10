@Override
public void glUniform4fv(int location, int count, float[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform4fv(loc, v);
}

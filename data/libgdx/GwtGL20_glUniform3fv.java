@Override
public void glUniform3fv(int location, int count, float[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform3fv(loc, v);
}

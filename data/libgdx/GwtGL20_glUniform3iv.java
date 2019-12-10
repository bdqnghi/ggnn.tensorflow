@Override
public void glUniform3iv(int location, int count, int[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform3iv(loc, v);
}

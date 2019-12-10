@Override
public void glUniform4iv(int location, int count, int[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform4iv(loc, v);
}

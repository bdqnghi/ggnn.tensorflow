@Override
public void glUniform2iv(int location, int count, int[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform2iv(loc, v);
}

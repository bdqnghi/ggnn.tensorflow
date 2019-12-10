@Override
public void glUniform1fv(int location, int count, float[] v, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniform1fv(loc, v);
}

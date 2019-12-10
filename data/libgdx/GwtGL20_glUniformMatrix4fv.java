@Override
public void glUniformMatrix4fv(int location, int count, boolean transpose, float[] value, int offset) {
    WebGLUniformLocation loc = getUniformLocation(location);
    gl.uniformMatrix4fv(loc, transpose, value);
}

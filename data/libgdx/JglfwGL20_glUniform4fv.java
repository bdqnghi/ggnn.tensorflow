public void glUniform4fv(int location, int count, float[] v, int offset) {
    glUniform4fv(location, count, toFloatBuffer(v, offset, count << 2));
}

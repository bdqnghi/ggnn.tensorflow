public void glUniform2fv(int location, int count, float[] v, int offset) {
    glUniform2fv(location, count, toFloatBuffer(v, offset, count << 1));
}

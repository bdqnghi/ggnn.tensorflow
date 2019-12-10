public void glUniformMatrix2fv(int location, int count, boolean transpose, float[] value, int offset) {
    glUniformMatrix2fv(location, count, transpose, toFloatBuffer(value, offset, count << 2));
}

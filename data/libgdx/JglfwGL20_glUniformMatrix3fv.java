public void glUniformMatrix3fv(int location, int count, boolean transpose, float[] value, int offset) {
    glUniformMatrix3fv(location, count, transpose, toFloatBuffer(value, offset, count * 9));
}

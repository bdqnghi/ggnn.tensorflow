public void glUniformMatrix4fv(int location, int count, boolean transpose, float[] value, int offset) {
    glUniformMatrix4fv(location, count, transpose, toFloatBuffer(value, offset, count << 4));
}

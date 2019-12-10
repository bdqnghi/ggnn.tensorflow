public void glUniformMatrix2fv(int location, int count, boolean transpose, float[] value, int offset) {
    GL20.glUniformMatrix2(location, transpose, toFloatBuffer(value, offset, count << 2));
}

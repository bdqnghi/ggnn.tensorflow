public void glUniformMatrix4fv(int location, int count, boolean transpose, float[] value, int offset) {
    GL20.glUniformMatrix4(location, transpose, toFloatBuffer(value, offset, count << 4));
}

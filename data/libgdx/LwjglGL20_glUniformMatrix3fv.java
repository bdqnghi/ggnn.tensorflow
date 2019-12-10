public void glUniformMatrix3fv(int location, int count, boolean transpose, float[] value, int offset) {
    GL20.glUniformMatrix3(location, transpose, toFloatBuffer(value, offset, count * 9));
}

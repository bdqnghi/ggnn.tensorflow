public void glUniform3fv(int location, int count, float[] v, int offset) {
    GL20.glUniform3(location, toFloatBuffer(v, offset, count * 3));
}

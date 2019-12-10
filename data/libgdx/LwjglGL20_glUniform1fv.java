public void glUniform1fv(int location, int count, float[] v, int offset) {
    GL20.glUniform1(location, toFloatBuffer(v, offset, count));
}

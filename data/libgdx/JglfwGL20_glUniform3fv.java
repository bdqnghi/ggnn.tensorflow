public void glUniform3fv(int location, int count, float[] v, int offset) {
    glUniform3fv(location, count, toFloatBuffer(v, offset, count * 3));
}

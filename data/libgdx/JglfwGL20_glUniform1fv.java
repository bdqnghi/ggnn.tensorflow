public void glUniform1fv(int location, int count, float[] v, int offset) {
    glUniform1fv(location, count, toFloatBuffer(v, offset, count));
}

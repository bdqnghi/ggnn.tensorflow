public void glUniform1iv(int location, int count, int[] v, int offset) {
    glUniform1iv(location, count, toIntBuffer(v, offset, count));
}

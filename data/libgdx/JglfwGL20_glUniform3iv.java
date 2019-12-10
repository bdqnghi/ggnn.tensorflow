public void glUniform3iv(int location, int count, int[] v, int offset) {
    glUniform3iv(location, count, toIntBuffer(v, offset, count * 3));
}

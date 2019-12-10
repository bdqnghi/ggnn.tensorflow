public void glUniform4iv(int location, int count, int[] v, int offset) {
    glUniform4iv(location, count, toIntBuffer(v, offset, count << 2));
}

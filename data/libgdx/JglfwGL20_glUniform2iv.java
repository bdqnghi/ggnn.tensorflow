public void glUniform2iv(int location, int count, int[] v, int offset) {
    glUniform2iv(location, count, toIntBuffer(v, offset, count << 1));
}

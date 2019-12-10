public void glUniform2iv(int location, int count, int[] v, int offset) {
    GL20.glUniform2(location, toIntBuffer(v, offset, count << 1));
}

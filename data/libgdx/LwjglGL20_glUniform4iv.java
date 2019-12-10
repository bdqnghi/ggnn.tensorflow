public void glUniform4iv(int location, int count, int[] v, int offset) {
    GL20.glUniform4(location, toIntBuffer(v, offset, count << 2));
}

public void glUniform3iv(int location, int count, int[] v, int offset) {
    GL20.glUniform3(location, toIntBuffer(v, offset, count * 3));
}

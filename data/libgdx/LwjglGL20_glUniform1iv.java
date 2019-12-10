@Override
public void glUniform1iv(int location, int count, int[] v, int offset) {
    GL20.glUniform1(location, toIntBuffer(v, offset, count));
}

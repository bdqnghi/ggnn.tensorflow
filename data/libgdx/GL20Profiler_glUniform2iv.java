@Override
public void glUniform2iv(int location, int count, int[] v, int offset) {
    calls++;
    gl20.glUniform2iv(location, count, v, offset);
    check();
}

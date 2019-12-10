@Override
public void glUniform2iv(int location, int count, int[] v, int offset) {
    calls++;
    gl30.glUniform2iv(location, count, v, offset);
    check();
}

@Override
public void glUniform4iv(int location, int count, int[] v, int offset) {
    calls++;
    gl30.glUniform4iv(location, count, v, offset);
    check();
}

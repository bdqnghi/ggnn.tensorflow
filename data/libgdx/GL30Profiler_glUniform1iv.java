@Override
public void glUniform1iv(int location, int count, int[] v, int offset) {
    calls++;
    gl30.glUniform1iv(location, count, v, offset);
    check();
}

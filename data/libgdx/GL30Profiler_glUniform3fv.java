@Override
public void glUniform3fv(int location, int count, float[] v, int offset) {
    calls++;
    gl30.glUniform3fv(location, count, v, offset);
    check();
}

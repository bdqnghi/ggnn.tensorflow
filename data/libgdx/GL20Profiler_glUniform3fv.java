@Override
public void glUniform3fv(int location, int count, float[] v, int offset) {
    calls++;
    gl20.glUniform3fv(location, count, v, offset);
    check();
}

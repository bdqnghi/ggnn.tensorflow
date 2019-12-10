@Override
public void glUniform1fv(int location, int count, float[] v, int offset) {
    calls++;
    gl20.glUniform1fv(location, count, v, offset);
    check();
}

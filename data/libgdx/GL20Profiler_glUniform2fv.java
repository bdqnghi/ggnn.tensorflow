@Override
public void glUniform2fv(int location, int count, float[] v, int offset) {
    calls++;
    gl20.glUniform2fv(location, count, v, offset);
    check();
}

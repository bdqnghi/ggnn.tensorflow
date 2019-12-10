@Override
public void glUniform1fv(int location, int count, float[] v, int offset) {
    calls++;
    gl30.glUniform1fv(location, count, v, offset);
    check();
}

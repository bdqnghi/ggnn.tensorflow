@Override
public void glUniformMatrix4fv(int location, int count, boolean transpose, float[] value, int offset) {
    calls++;
    gl20.glUniformMatrix4fv(location, count, transpose, value, offset);
    check();
}

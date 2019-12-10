@Override
public void glUniformMatrix2x4fv(int location, int count, boolean transpose, FloatBuffer value) {
    calls++;
    gl30.glUniformMatrix2x4fv(location, count, transpose, value);
    check();
}

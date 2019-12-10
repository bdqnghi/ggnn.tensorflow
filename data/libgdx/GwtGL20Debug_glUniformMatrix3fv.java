@Override
public void glUniformMatrix3fv(int location, int count, boolean transpose, FloatBuffer value) {
    super.glUniformMatrix3fv(location, count, transpose, value);
    checkError();
}

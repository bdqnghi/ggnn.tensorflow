@Override
public void glUniformMatrix2fv(int location, int count, boolean transpose, FloatBuffer value) {
    super.glUniformMatrix2fv(location, count, transpose, value);
    checkError();
}

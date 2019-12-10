@Override
public void glUniformMatrix4fv(int location, int count, boolean transpose, FloatBuffer value) {
    super.glUniformMatrix4fv(location, count, transpose, value);
    checkError();
}

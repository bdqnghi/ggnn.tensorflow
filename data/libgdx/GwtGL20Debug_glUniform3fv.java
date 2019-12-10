@Override
public void glUniform3fv(int location, int count, FloatBuffer v) {
    super.glUniform3fv(location, count, v);
    checkError();
}

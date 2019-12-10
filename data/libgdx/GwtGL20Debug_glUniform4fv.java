@Override
public void glUniform4fv(int location, int count, FloatBuffer v) {
    super.glUniform4fv(location, count, v);
    checkError();
}

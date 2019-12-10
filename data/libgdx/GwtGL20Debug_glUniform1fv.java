@Override
public void glUniform1fv(int location, int count, FloatBuffer v) {
    super.glUniform1fv(location, count, v);
    checkError();
}

@Override
public void glUniform2fv(int location, int count, FloatBuffer v) {
    super.glUniform2fv(location, count, v);
    checkError();
}

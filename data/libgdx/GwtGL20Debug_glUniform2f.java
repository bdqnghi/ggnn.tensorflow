@Override
public void glUniform2f(int location, float x, float y) {
    super.glUniform2f(location, x, y);
    checkError();
}

@Override
public void glUniform1f(int location, float x) {
    super.glUniform1f(location, x);
    checkError();
}

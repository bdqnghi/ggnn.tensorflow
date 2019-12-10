@Override
public void glUniform1i(int location, int x) {
    super.glUniform1i(location, x);
    checkError();
}

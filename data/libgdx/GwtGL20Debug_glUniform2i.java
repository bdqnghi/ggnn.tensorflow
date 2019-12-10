@Override
public void glUniform2i(int location, int x, int y) {
    super.glUniform2i(location, x, y);
    checkError();
}

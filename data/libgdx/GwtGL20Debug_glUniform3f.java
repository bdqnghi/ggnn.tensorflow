@Override
public void glUniform3f(int location, float x, float y, float z) {
    super.glUniform3f(location, x, y, z);
    checkError();
}

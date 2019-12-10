@Override
public void glUniform3iv(int location, int count, IntBuffer v) {
    super.glUniform3iv(location, count, v);
    checkError();
}

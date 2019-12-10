@Override
public void glUniform1iv(int location, int count, IntBuffer v) {
    super.glUniform1iv(location, count, v);
    checkError();
}

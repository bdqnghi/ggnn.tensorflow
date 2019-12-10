@Override
public void glUniform4iv(int location, int count, IntBuffer v) {
    super.glUniform4iv(location, count, v);
    checkError();
}

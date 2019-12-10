@Override
public void glUniform2iv(int location, int count, IntBuffer v) {
    super.glUniform2iv(location, count, v);
    checkError();
}

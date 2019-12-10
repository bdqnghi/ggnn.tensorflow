@Override
public void glGetUniformfv(int program, int location, FloatBuffer params) {
    super.glGetUniformfv(program, location, params);
    checkError();
}

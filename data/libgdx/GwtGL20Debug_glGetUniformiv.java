@Override
public void glGetUniformiv(int program, int location, IntBuffer params) {
    super.glGetUniformiv(program, location, params);
    checkError();
}

@Override
public void glBindAttribLocation(int program, int index, String name) {
    super.glBindAttribLocation(program, index, name);
    checkError();
}

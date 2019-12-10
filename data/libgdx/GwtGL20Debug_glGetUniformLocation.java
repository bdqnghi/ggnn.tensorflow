@Override
public int glGetUniformLocation(int program, String name) {
    int loc = super.glGetUniformLocation(program, name);
    checkError();
    return loc;
}

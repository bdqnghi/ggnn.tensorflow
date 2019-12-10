@Override
public int glGetAttribLocation(int program, String name) {
    int loc = super.glGetAttribLocation(program, name);
    checkError();
    return loc;
}

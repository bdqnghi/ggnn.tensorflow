@Override
public int glCreateProgram() {
    int program = super.glCreateProgram();
    checkError();
    return program;
}

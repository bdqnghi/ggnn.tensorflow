@Override
public boolean glIsProgram(int program) {
    boolean res = super.glIsProgram(program);
    checkError();
    return res;
}

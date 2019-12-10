@Override
public boolean glIsShader(int shader) {
    boolean res = super.glIsShader(shader);
    checkError();
    return res;
}

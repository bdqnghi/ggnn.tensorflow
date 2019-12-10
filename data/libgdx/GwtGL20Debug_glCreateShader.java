@Override
public int glCreateShader(int type) {
    int shader = super.glCreateShader(type);
    checkError();
    return shader;
}

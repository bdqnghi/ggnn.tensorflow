@Override
public String glGetShaderInfoLog(int shader) {
    String info = super.glGetShaderInfoLog(shader);
    checkError();
    return info;
}

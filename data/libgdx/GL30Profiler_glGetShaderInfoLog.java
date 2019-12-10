@Override
public String glGetShaderInfoLog(int shader) {
    calls++;
    String result = gl30.glGetShaderInfoLog(shader);
    check();
    return result;
}

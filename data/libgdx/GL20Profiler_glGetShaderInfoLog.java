@Override
public String glGetShaderInfoLog(int shader) {
    calls++;
    String result = gl20.glGetShaderInfoLog(shader);
    check();
    return result;
}

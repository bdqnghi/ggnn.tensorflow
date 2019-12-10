@Override
public boolean glIsShader(int shader) {
    calls++;
    boolean result = gl30.glIsShader(shader);
    check();
    return result;
}

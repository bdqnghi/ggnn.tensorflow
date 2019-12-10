@Override
public boolean glIsShader(int shader) {
    calls++;
    boolean result = gl20.glIsShader(shader);
    check();
    return result;
}

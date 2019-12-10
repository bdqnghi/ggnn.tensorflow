@Override
public boolean glIsTexture(int texture) {
    calls++;
    boolean result = gl20.glIsTexture(texture);
    check();
    return result;
}

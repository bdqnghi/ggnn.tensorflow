@Override
public boolean glIsTexture(int texture) {
    calls++;
    boolean result = gl30.glIsTexture(texture);
    check();
    return result;
}

@Override
public void glActiveTexture(int texture) {
    calls++;
    gl30.glActiveTexture(texture);
    check();
}

@Override
public void glActiveTexture(int texture) {
    calls++;
    gl20.glActiveTexture(texture);
    check();
}

@Override
public void glBindTexture(int target, int texture) {
    textureBindings++;
    calls++;
    gl30.glBindTexture(target, texture);
    check();
}

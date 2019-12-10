@Override
public void glBindTexture(int target, int texture) {
    textureBindings++;
    calls++;
    gl20.glBindTexture(target, texture);
    check();
}

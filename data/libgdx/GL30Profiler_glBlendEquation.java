@Override
public void glBlendEquation(int mode) {
    calls++;
    gl30.glBlendEquation(mode);
    check();
}

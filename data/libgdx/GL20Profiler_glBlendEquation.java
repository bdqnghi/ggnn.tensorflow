@Override
public void glBlendEquation(int mode) {
    calls++;
    gl20.glBlendEquation(mode);
    check();
}

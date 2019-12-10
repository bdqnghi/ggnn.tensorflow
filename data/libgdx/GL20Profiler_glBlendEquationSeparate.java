@Override
public void glBlendEquationSeparate(int modeRGB, int modeAlpha) {
    calls++;
    gl20.glBlendEquationSeparate(modeRGB, modeAlpha);
    check();
}

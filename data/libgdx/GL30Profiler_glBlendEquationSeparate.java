@Override
public void glBlendEquationSeparate(int modeRGB, int modeAlpha) {
    calls++;
    gl30.glBlendEquationSeparate(modeRGB, modeAlpha);
    check();
}

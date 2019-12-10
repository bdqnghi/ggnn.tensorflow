@Override
public void glBlendFuncSeparate(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha) {
    calls++;
    gl30.glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
    check();
}

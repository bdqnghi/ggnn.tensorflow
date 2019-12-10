@Override
public void glBlendFuncSeparate(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha) {
    super.glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
    checkError();
}

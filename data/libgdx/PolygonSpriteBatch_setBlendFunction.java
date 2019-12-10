@Override
public void setBlendFunction(int srcFunc, int dstFunc) {
    if (blendSrcFunc == srcFunc && blendDstFunc == dstFunc)
        return;
    flush();
    blendSrcFunc = srcFunc;
    blendDstFunc = dstFunc;
}

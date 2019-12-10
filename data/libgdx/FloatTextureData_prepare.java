@Override
public void prepare() {
    if (isPrepared)
        throw new GdxRuntimeException("Already prepared");
    this.buffer = BufferUtils.newFloatBuffer(width * height * 4);
    isPrepared = true;
}

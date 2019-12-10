@Override
public void prepare() {
    if (isPrepared)
        throw new GdxRuntimeException("Already prepared");
    isPrepared = true;
}

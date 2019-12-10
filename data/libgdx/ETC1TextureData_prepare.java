@Override
public void prepare() {
    if (isPrepared)
        throw new GdxRuntimeException("Already prepared");
    if (file == null && data == null)
        throw new GdxRuntimeException("Can only load once from ETC1Data");
    if (file != null) {
        data = new ETC1Data(file);
    }
    width = data.width;
    height = data.height;
    isPrepared = true;
}

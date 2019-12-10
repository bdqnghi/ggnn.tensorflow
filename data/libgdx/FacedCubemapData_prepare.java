@Override
public void prepare() {
    if (!isComplete())
        throw new GdxRuntimeException("You need to complete your cubemap data before using it");
    for (int i = 0; i < data.length; i++) if (!data[i].isPrepared())
        data[i].prepare();
}

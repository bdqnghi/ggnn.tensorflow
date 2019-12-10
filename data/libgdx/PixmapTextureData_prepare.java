@Override
public void prepare() {
    throw new GdxRuntimeException("prepare() must not be called on a PixmapTextureData instance as it is already prepared.");
}

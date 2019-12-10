@Override
public void consumeCustomData(int target) {
    throw new GdxRuntimeException("This TextureData implementation does not upload data itself");
}

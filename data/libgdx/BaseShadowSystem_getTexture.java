public Texture getTexture(int n) {
    if (n >= getPassQuantity())
        throw new GdxRuntimeException("Can't get texture " + n);
    return frameBuffers[n].getColorBufferTexture();
}

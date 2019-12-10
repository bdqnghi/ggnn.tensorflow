public void glCompressedTexImage2D(int target, int level, int internalformat, int width, int height, int border, int imageSize, Buffer data) {
    if (data instanceof ByteBuffer) {
        GL13.glCompressedTexImage2D(target, level, internalformat, width, height, border, (ByteBuffer) data);
    } else {
        throw new GdxRuntimeException("Can't use " + data.getClass().getName() + " with this method. Use ByteBuffer instead.");
    }
}

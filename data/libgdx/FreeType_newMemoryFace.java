public Face newMemoryFace(ByteBuffer buffer, int faceIndex) {
    long face = newMemoryFace(address, buffer, buffer.remaining(), faceIndex);
    if (face == 0) {
        BufferUtils.disposeUnsafeByteBuffer(buffer);
        throw new GdxRuntimeException("Couldn't load font");
    } else {
        fontData.put(face, buffer);
        return new Face(face, this);
    }
}

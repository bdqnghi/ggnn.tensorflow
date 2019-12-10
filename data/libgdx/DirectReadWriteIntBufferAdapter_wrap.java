static IntBuffer wrap(DirectReadWriteByteBuffer byteBuffer) {
    return new DirectReadWriteIntBufferAdapter((DirectReadWriteByteBuffer) byteBuffer.slice());
}

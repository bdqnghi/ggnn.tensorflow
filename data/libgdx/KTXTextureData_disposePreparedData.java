public void disposePreparedData() {
    if (compressedData != null)
        BufferUtils.disposeUnsafeByteBuffer(compressedData);
    compressedData = null;
}

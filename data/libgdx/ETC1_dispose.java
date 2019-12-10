/**
 * Releases the native resources of the ETC1Data instance.
 */
public void dispose() {
    BufferUtils.disposeUnsafeByteBuffer(compressedData);
}

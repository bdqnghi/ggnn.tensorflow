/**
 * Writes the ETC1Data with a PKM header to the given file.
 * @param file the file.
 */
public void write(FileHandle file) {
    DataOutputStream write = null;
    byte[] buffer = new byte[10 * 1024];
    int writtenBytes = 0;
    compressedData.position(0);
    compressedData.limit(compressedData.capacity());
    try {
        write = new DataOutputStream(new GZIPOutputStream(file.write(false)));
        write.writeInt(compressedData.capacity());
        while (writtenBytes != compressedData.capacity()) {
            int bytesToWrite = Math.min(compressedData.remaining(), buffer.length);
            compressedData.get(buffer, 0, bytesToWrite);
            write.write(buffer, 0, bytesToWrite);
            writtenBytes += bytesToWrite;
        }
    } catch (Exception e) {
        throw new GdxRuntimeException("Couldn't write PKM file to '" + file + "'", e);
    } finally {
        StreamUtils.closeQuietly(write);
    }
    compressedData.position(dataOffset);
    compressedData.limit(compressedData.capacity());
}

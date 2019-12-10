/**
 * Copy the data from an {@link InputStream} to a {@link ByteBuffer}, using the specified byte[] as a temporary buffer. The
 * buffer's limit is increased by the number of bytes copied, the position is left unchanged. The stream is not closed.
 * @param output Must be a direct Buffer with native byte order and the buffer MUST be large enough to hold all the bytes in
 *           the stream. No error checking is performed.
 * @return the number of bytes copied.
 */
public static int copyStream(InputStream input, ByteBuffer output, byte[] buffer) throws IOException {
    int startPosition = output.position(), total = 0, bytesRead;
    while ((bytesRead = input.read(buffer)) != -1) {
        BufferUtils.copy(buffer, 0, output, bytesRead);
        total += bytesRead;
        output.position(startPosition + total);
    }
    output.position(startPosition);
    return total;
}

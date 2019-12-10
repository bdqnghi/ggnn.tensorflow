/**
 * Flushes the underlying stream. This forces any buffered output bytes to be written out to the stream.
 */
public void flush() throws IOException {
    out.flush();
}

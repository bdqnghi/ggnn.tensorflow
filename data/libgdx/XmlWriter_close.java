/**
 * Calls {@link #pop()} for each remaining open element, if any, and closes the stream.
 */
public void close() throws IOException {
    while (stack.size != 0) pop();
    writer.close();
}

/**
 * Appends a {@code null} value to the stream.
 * @return this writer, for chaining
 */
public UBJsonWriter value() throws IOException {
    checkName();
    out.writeByte('Z');
    return this;
}

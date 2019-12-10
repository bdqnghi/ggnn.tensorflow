/**
 * Appends a named {@code null} array value to the stream.
 * @return this writer, for chaining
 */
public UBJsonWriter set(String name) throws IOException {
    return name(name).value();
}

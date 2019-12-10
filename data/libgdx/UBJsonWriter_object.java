/**
 * Begins a new named object container, having the given name. To finish the object call {@link #pop()}.
 * @return This writer, for chaining
 */
public UBJsonWriter object(String name) throws IOException {
    name(name).object();
    return this;
}

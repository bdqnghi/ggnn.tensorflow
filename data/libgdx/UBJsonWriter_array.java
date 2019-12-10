/**
 * Begins a new named array container, having the given name. To finish the array call {@link #pop()}.
 * @return this writer, for chaining.
 */
public UBJsonWriter array(String name) throws IOException {
    name(name).array();
    return this;
}

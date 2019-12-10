/**
 * Appends a name for the next object, array, or value.
 * @return this writer, for chaining
 */
public UBJsonWriter name(String name) throws IOException {
    if (current == null || current.array)
        throw new IllegalStateException("Current item must be an object.");
    byte[] bytes = name.getBytes("UTF-8");
    if (bytes.length <= Byte.MAX_VALUE) {
        out.writeByte('i');
        out.writeByte(bytes.length);
    } else if (bytes.length <= Short.MAX_VALUE) {
        out.writeByte('I');
        out.writeShort(bytes.length);
    } else {
        out.writeByte('l');
        out.writeInt(bytes.length);
    }
    out.write(bytes);
    named = true;
    return this;
}

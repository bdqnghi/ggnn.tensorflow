/**
 * @param knownType May be null if the type is unknown.
 * @param elementType May be null if the type is unknown.
 */
public void toJson(Object object, Class knownType, Class elementType, Writer writer) {
    setWriter(writer);
    try {
        writeValue(object, knownType, elementType);
    } finally {
        StreamUtils.closeQuietly(this.writer);
        this.writer = null;
    }
}

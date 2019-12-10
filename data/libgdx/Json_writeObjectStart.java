/**
 * Starts writing an object, writing the actualType to a field if needed.
 * @param knownType May be null if the type is unknown.
 */
public void writeObjectStart(Class actualType, Class knownType) {
    try {
        writer.object();
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
    if (knownType == null || knownType != actualType)
        writeType(actualType);
}

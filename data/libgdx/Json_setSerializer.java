/**
 * Registers a serializer to use for the specified type instead of the default behavior of serializing all of an objects
 * fields.
 */
public <T> void setSerializer(Class<T> type, Serializer<T> serializer) {
    classToSerializer.put(type, serializer);
}

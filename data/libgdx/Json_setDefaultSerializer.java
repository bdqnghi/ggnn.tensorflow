/**
 * Sets the serializer to use when the type being deserialized is not known (null).
 * @param defaultSerializer May be null.
 */
public void setDefaultSerializer(Serializer defaultSerializer) {
    this.defaultSerializer = defaultSerializer;
}

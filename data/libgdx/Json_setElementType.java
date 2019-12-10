/**
 * Sets the type of elements in a collection. When the element type is known, the class for each element in the collection
 * does not need to be written unless different from the element type.
 */
public void setElementType(Class type, String fieldName, Class elementType) {
    ObjectMap<String, FieldMetadata> fields = getFields(type);
    FieldMetadata metadata = fields.get(fieldName);
    if (metadata == null)
        throw new SerializationException("Field not found: " + fieldName + " (" + type.getName() + ")");
    metadata.elementType = elementType;
}

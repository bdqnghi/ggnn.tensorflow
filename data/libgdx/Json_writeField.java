/**
 * Writes the specified field to the current JSON object.
 * @param elementType May be null if the type is unknown.
 */
public void writeField(Object object, String fieldName, String jsonName, Class elementType) {
    Class type = object.getClass();
    ObjectMap<String, FieldMetadata> fields = getFields(type);
    FieldMetadata metadata = fields.get(fieldName);
    if (metadata == null)
        throw new SerializationException("Field not found: " + fieldName + " (" + type.getName() + ")");
    Field field = metadata.field;
    if (elementType == null)
        elementType = metadata.elementType;
    try {
        if (debug)
            System.out.println("Writing field: " + field.getName() + " (" + type.getName() + ")");
        writer.name(jsonName);
        writeValue(field.get(object), field.getType(), elementType);
    } catch (ReflectionException ex) {
        throw new SerializationException("Error accessing field: " + field.getName() + " (" + type.getName() + ")", ex);
    } catch (SerializationException ex) {
        ex.addTrace(field + " (" + type.getName() + ")");
        throw ex;
    } catch (Exception runtimeEx) {
        SerializationException ex = new SerializationException(runtimeEx);
        ex.addTrace(field + " (" + type.getName() + ")");
        throw ex;
    }
}

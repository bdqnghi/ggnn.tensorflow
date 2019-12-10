/**
 * Writes all fields of the specified object to the current JSON object.
 */
public void writeFields(Object object) {
    Class type = object.getClass();
    Object[] defaultValues = getDefaultValues(type);
    OrderedMap<String, FieldMetadata> fields = getFields(type);
    int i = 0;
    for (FieldMetadata metadata : new OrderedMapValues<FieldMetadata>(fields)) {
        Field field = metadata.field;
        try {
            Object value = field.get(object);
            if (defaultValues != null) {
                Object defaultValue = defaultValues[i++];
                if (value == null && defaultValue == null)
                    continue;
                if (value != null && defaultValue != null) {
                    if (value.equals(defaultValue))
                        continue;
                    if (value.getClass().isArray() && defaultValue.getClass().isArray()) {
                        equals1[0] = value;
                        equals2[0] = defaultValue;
                        if (Arrays.deepEquals(equals1, equals2))
                            continue;
                    }
                }
            }
            if (debug)
                System.out.println("Writing field: " + field.getName() + " (" + type.getName() + ")");
            writer.name(field.getName());
            writeValue(value, field.getType(), metadata.elementType);
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
}

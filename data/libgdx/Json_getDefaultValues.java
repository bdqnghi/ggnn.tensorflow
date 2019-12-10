private Object[] getDefaultValues(Class type) {
    if (!usePrototypes)
        return null;
    if (classToDefaultValues.containsKey(type))
        return classToDefaultValues.get(type);
    Object object;
    try {
        object = newInstance(type);
    } catch (Exception ex) {
        classToDefaultValues.put(type, null);
        return null;
    }
    ObjectMap<String, FieldMetadata> fields = getFields(type);
    Object[] values = new Object[fields.size];
    classToDefaultValues.put(type, values);
    int i = 0;
    for (FieldMetadata metadata : fields.values()) {
        Field field = metadata.field;
        try {
            values[i++] = field.get(object);
        } catch (ReflectionException ex) {
            throw new SerializationException("Error accessing field: " + field.getName() + " (" + type.getName() + ")", ex);
        } catch (SerializationException ex) {
            ex.addTrace(field + " (" + type.getName() + ")");
            throw ex;
        } catch (RuntimeException runtimeEx) {
            SerializationException ex = new SerializationException(runtimeEx);
            ex.addTrace(field + " (" + type.getName() + ")");
            throw ex;
        }
    }
    return values;
}

public void readFields(Object object, JsonValue jsonMap) {
    Class type = object.getClass();
    ObjectMap<String, FieldMetadata> fields = getFields(type);
    for (JsonValue child = jsonMap.child; child != null; child = child.next) {
        FieldMetadata metadata = fields.get(child.name());
        if (metadata == null) {
            if (ignoreUnknownFields) {
                if (debug)
                    System.out.println("Ignoring unknown field: " + child.name() + " (" + type.getName() + ")");
                continue;
            } else {
                SerializationException ex = new SerializationException("Field not found: " + child.name() + " (" + type.getName() + ")");
                ex.addTrace(child.trace());
                throw ex;
            }
        }
        Field field = metadata.field;
        try {
            field.set(object, readValue(field.getType(), metadata.elementType, child));
        } catch (ReflectionException ex) {
            throw new SerializationException("Error accessing field: " + field.getName() + " (" + type.getName() + ")", ex);
        } catch (SerializationException ex) {
            ex.addTrace(field.getName() + " (" + type.getName() + ")");
            throw ex;
        } catch (RuntimeException runtimeEx) {
            SerializationException ex = new SerializationException(runtimeEx);
            ex.addTrace(child.trace());
            ex.addTrace(field.getName() + " (" + type.getName() + ")");
            throw ex;
        }
    }
}

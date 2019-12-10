/**
 * Writes the value, writing the class of the object if it differs from the specified known type. The specified element type
 * is used as the default type for collections.
 * @param value May be null.
 * @param knownType May be null if the type is unknown.
 * @param elementType May be null if the type is unknown.
 */
public void writeValue(Object value, Class knownType, Class elementType) {
    try {
        if (value == null) {
            writer.value(null);
            return;
        }
        if ((knownType != null && knownType.isPrimitive()) || knownType == String.class || knownType == Integer.class || knownType == Boolean.class || knownType == Float.class || knownType == Long.class || knownType == Double.class || knownType == Short.class || knownType == Byte.class || knownType == Character.class) {
            writer.value(value);
            return;
        }
        Class actualType = value.getClass();
        if (actualType.isPrimitive() || actualType == String.class || actualType == Integer.class || actualType == Boolean.class || actualType == Float.class || actualType == Long.class || actualType == Double.class || actualType == Short.class || actualType == Byte.class || actualType == Character.class) {
            writeObjectStart(actualType, null);
            writeValue("value", value);
            writeObjectEnd();
            return;
        }
        if (value instanceof Serializable) {
            writeObjectStart(actualType, knownType);
            ((Serializable) value).write(this);
            writeObjectEnd();
            return;
        }
        Serializer serializer = classToSerializer.get(actualType);
        if (serializer != null) {
            serializer.write(this, value, knownType);
            return;
        }
        // JSON array special cases.
        if (value instanceof Array) {
            if (knownType != null && actualType != knownType && actualType != Array.class)
                throw new SerializationException("Serialization of an Array other than the known type is not supported.\n" + "Known type: " + knownType + "\nActual type: " + actualType);
            writeArrayStart();
            Array array = (Array) value;
            for (int i = 0, n = array.size; i < n; i++) writeValue(array.get(i), elementType, null);
            writeArrayEnd();
            return;
        }
        if (value instanceof Queue) {
            if (knownType != null && actualType != knownType && actualType != Queue.class)
                throw new SerializationException("Serialization of a Queue other than the known type is not supported.\n" + "Known type: " + knownType + "\nActual type: " + actualType);
            writeArrayStart();
            Queue queue = (Queue) value;
            for (int i = 0, n = queue.size; i < n; i++) writeValue(queue.get(i), elementType, null);
            writeArrayEnd();
            return;
        }
        if (value instanceof Collection) {
            if (typeName != null && actualType != ArrayList.class && (knownType == null || knownType != actualType)) {
                writeObjectStart(actualType, knownType);
                writeArrayStart("items");
                for (Object item : (Collection) value) writeValue(item, elementType, null);
                writeArrayEnd();
                writeObjectEnd();
            } else {
                writeArrayStart();
                for (Object item : (Collection) value) writeValue(item, elementType, null);
                writeArrayEnd();
            }
            return;
        }
        if (actualType.isArray()) {
            if (elementType == null)
                elementType = actualType.getComponentType();
            int length = ArrayReflection.getLength(value);
            writeArrayStart();
            for (int i = 0; i < length; i++) writeValue(ArrayReflection.get(value, i), elementType, null);
            writeArrayEnd();
            return;
        }
        // JSON object special cases.
        if (value instanceof ObjectMap) {
            if (knownType == null)
                knownType = ObjectMap.class;
            writeObjectStart(actualType, knownType);
            for (Entry entry : ((ObjectMap<?, ?>) value).entries()) {
                writer.name(convertToString(entry.key));
                writeValue(entry.value, elementType, null);
            }
            writeObjectEnd();
            return;
        }
        if (value instanceof ArrayMap) {
            if (knownType == null)
                knownType = ArrayMap.class;
            writeObjectStart(actualType, knownType);
            ArrayMap map = (ArrayMap) value;
            for (int i = 0, n = map.size; i < n; i++) {
                writer.name(convertToString(map.keys[i]));
                writeValue(map.values[i], elementType, null);
            }
            writeObjectEnd();
            return;
        }
        if (value instanceof Map) {
            if (knownType == null)
                knownType = HashMap.class;
            writeObjectStart(actualType, knownType);
            for (Map.Entry entry : ((Map<?, ?>) value).entrySet()) {
                writer.name(convertToString(entry.getKey()));
                writeValue(entry.getValue(), elementType, null);
            }
            writeObjectEnd();
            return;
        }
        // Enum special case.
        if (ClassReflection.isAssignableFrom(Enum.class, actualType)) {
            if (typeName != null && (knownType == null || knownType != actualType)) {
                // Ensures that enums with specific implementations (abstract logic) serialize correctly.
                if (actualType.getEnumConstants() == null)
                    actualType = actualType.getSuperclass();
                writeObjectStart(actualType, null);
                writer.name("value");
                writer.value(convertToString((Enum) value));
                writeObjectEnd();
            } else {
                writer.value(convertToString((Enum) value));
            }
            return;
        }
        writeObjectStart(actualType, knownType);
        writeFields(value);
        writeObjectEnd();
    } catch (IOException ex) {
        throw new SerializationException(ex);
    }
}

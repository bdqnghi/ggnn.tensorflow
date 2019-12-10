/**
 * @param type May be null if the type is unknown.
 * @param elementType May be null if the type is unknown.
 * @return May be null.
 */
public <T> T readValue(Class<T> type, Class elementType, JsonValue jsonData) {
    if (jsonData == null)
        return null;
    if (jsonData.isObject()) {
        String className = typeName == null ? null : jsonData.getString(typeName, null);
        if (className != null) {
            jsonData.remove(typeName);
            type = getClass(className);
            if (type == null) {
                try {
                    type = (Class<T>) ClassReflection.forName(className);
                } catch (ReflectionException ex) {
                    throw new SerializationException(ex);
                }
            }
        }
        if (type == null) {
            if (defaultSerializer != null)
                return (T) defaultSerializer.read(this, jsonData, type);
            return (T) jsonData;
        }
        if (typeName != null && ClassReflection.isAssignableFrom(Collection.class, type)) {
            // JSON object wrapper to specify type.
            jsonData = jsonData.get("items");
        } else {
            Serializer serializer = classToSerializer.get(type);
            if (serializer != null)
                return (T) serializer.read(this, jsonData, type);
            if (type == String.class || type == Integer.class || type == Boolean.class || type == Float.class || type == Long.class || type == Double.class || type == Short.class || type == Byte.class || type == Character.class || ClassReflection.isAssignableFrom(Enum.class, type)) {
                return readValue("value", type, jsonData);
            }
            Object object = newInstance(type);
            if (object instanceof Serializable) {
                ((Serializable) object).read(this, jsonData);
                return (T) object;
            }
            // JSON object special cases.
            if (object instanceof ObjectMap) {
                ObjectMap result = (ObjectMap) object;
                for (JsonValue child = jsonData.child; child != null; child = child.next) result.put(child.name(), readValue(elementType, null, child));
                return (T) result;
            }
            if (object instanceof ArrayMap) {
                ArrayMap result = (ArrayMap) object;
                for (JsonValue child = jsonData.child; child != null; child = child.next) result.put(child.name(), readValue(elementType, null, child));
                return (T) result;
            }
            if (object instanceof Map) {
                Map result = (Map) object;
                for (JsonValue child = jsonData.child; child != null; child = child.next) result.put(child.name(), readValue(elementType, null, child));
                return (T) result;
            }
            readFields(object, jsonData);
            return (T) object;
        }
    }
    if (type != null) {
        Serializer serializer = classToSerializer.get(type);
        if (serializer != null)
            return (T) serializer.read(this, jsonData, type);
    }
    if (jsonData.isArray()) {
        // JSON array special cases.
        if (type == null || type == Object.class)
            type = (Class<T>) Array.class;
        if (ClassReflection.isAssignableFrom(Array.class, type)) {
            Array result = type == Array.class ? new Array() : (Array) newInstance(type);
            for (JsonValue child = jsonData.child; child != null; child = child.next) result.add(readValue(elementType, null, child));
            return (T) result;
        }
        if (ClassReflection.isAssignableFrom(Queue.class, type)) {
            Queue result = type == Queue.class ? new Queue() : (Queue) newInstance(type);
            for (JsonValue child = jsonData.child; child != null; child = child.next) result.addLast(readValue(elementType, null, child));
            return (T) result;
        }
        if (ClassReflection.isAssignableFrom(Collection.class, type)) {
            Collection result = type.isInterface() ? new ArrayList() : (Collection) newInstance(type);
            for (JsonValue child = jsonData.child; child != null; child = child.next) result.add(readValue(elementType, null, child));
            return (T) result;
        }
        if (type.isArray()) {
            Class componentType = type.getComponentType();
            if (elementType == null)
                elementType = componentType;
            Object result = ArrayReflection.newInstance(componentType, jsonData.size);
            int i = 0;
            for (JsonValue child = jsonData.child; child != null; child = child.next) ArrayReflection.set(result, i++, readValue(elementType, null, child));
            return (T) result;
        }
        throw new SerializationException("Unable to convert value to required type: " + jsonData + " (" + type.getName() + ")");
    }
    if (jsonData.isNumber()) {
        try {
            if (type == null || type == float.class || type == Float.class)
                return (T) (Float) jsonData.asFloat();
            if (type == int.class || type == Integer.class)
                return (T) (Integer) jsonData.asInt();
            if (type == long.class || type == Long.class)
                return (T) (Long) jsonData.asLong();
            if (type == double.class || type == Double.class)
                return (T) (Double) jsonData.asDouble();
            if (type == String.class)
                return (T) jsonData.asString();
            if (type == short.class || type == Short.class)
                return (T) (Short) jsonData.asShort();
            if (type == byte.class || type == Byte.class)
                return (T) (Byte) jsonData.asByte();
        } catch (NumberFormatException ignored) {
        }
        jsonData = new JsonValue(jsonData.asString());
    }
    if (jsonData.isBoolean()) {
        try {
            if (type == null || type == boolean.class || type == Boolean.class)
                return (T) (Boolean) jsonData.asBoolean();
        } catch (NumberFormatException ignored) {
        }
        jsonData = new JsonValue(jsonData.asString());
    }
    if (jsonData.isString()) {
        String string = jsonData.asString();
        if (type == null || type == String.class)
            return (T) string;
        try {
            if (type == int.class || type == Integer.class)
                return (T) Integer.valueOf(string);
            if (type == float.class || type == Float.class)
                return (T) Float.valueOf(string);
            if (type == long.class || type == Long.class)
                return (T) Long.valueOf(string);
            if (type == double.class || type == Double.class)
                return (T) Double.valueOf(string);
            if (type == short.class || type == Short.class)
                return (T) Short.valueOf(string);
            if (type == byte.class || type == Byte.class)
                return (T) Byte.valueOf(string);
        } catch (NumberFormatException ignored) {
        }
        if (type == boolean.class || type == Boolean.class)
            return (T) Boolean.valueOf(string);
        if (type == char.class || type == Character.class)
            return (T) (Character) string.charAt(0);
        if (ClassReflection.isAssignableFrom(Enum.class, type)) {
            Enum[] constants = (Enum[]) type.getEnumConstants();
            for (int i = 0, n = constants.length; i < n; i++) {
                Enum e = constants[i];
                if (string.equals(convertToString(e)))
                    return (T) e;
            }
        }
        if (type == CharSequence.class)
            return (T) string;
        throw new SerializationException("Unable to convert value to required type: " + jsonData + " (" + type.getName() + ")");
    }
    return null;
}

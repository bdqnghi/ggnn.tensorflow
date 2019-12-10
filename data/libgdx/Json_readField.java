/**
 * @param object May be null if the field is static.
 * @param elementType May be null if the type is unknown.
 */
public void readField(Object object, Field field, String jsonName, Class elementType, JsonValue jsonMap) {
    JsonValue jsonValue = jsonMap.get(jsonName);
    if (jsonValue == null)
        return;
    try {
        field.set(object, readValue(field.getType(), elementType, jsonValue));
    } catch (ReflectionException ex) {
        throw new SerializationException("Error accessing field: " + field.getName() + " (" + field.getDeclaringClass().getName() + ")", ex);
    } catch (SerializationException ex) {
        ex.addTrace(field.getName() + " (" + field.getDeclaringClass().getName() + ")");
        throw ex;
    } catch (RuntimeException runtimeEx) {
        SerializationException ex = new SerializationException(runtimeEx);
        ex.addTrace(jsonValue.trace());
        ex.addTrace(field.getName() + " (" + field.getDeclaringClass().getName() + ")");
        throw ex;
    }
}

/**
 * @param type May be null if the type is unknown.
 * @return May be null.
 */
public <T> T fromJson(Class<T> type, Class elementType, String json) {
    return (T) readValue(type, elementType, new JsonReader().parse(json));
}

/**
 * Returns the name to resource mapping for the specified type, or null if no resources of that type exist.
 */
public <T> ObjectMap<String, T> getAll(Class<T> type) {
    return (ObjectMap<String, T>) resources.get(type);
}

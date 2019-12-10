/**
 * Returns a named resource of the specified type.
 * @return null if not found.
 */
public <T> T optional(String name, Class<T> type) {
    if (name == null)
        throw new IllegalArgumentException("name cannot be null.");
    if (type == null)
        throw new IllegalArgumentException("type cannot be null.");
    ObjectMap<String, Object> typeResources = resources.get(type);
    if (typeResources == null)
        return null;
    return (T) typeResources.get(name);
}

/**
 * Returns the name of the specified style object, or null if it is not in the skin. This compares potentially every style
 * object in the skin of the same type as the specified style, which may be a somewhat expensive operation.
 */
public String find(Object resource) {
    if (resource == null)
        throw new IllegalArgumentException("style cannot be null.");
    ObjectMap<String, Object> typeResources = resources.get(resource.getClass());
    if (typeResources == null)
        return null;
    return typeResources.findKey(resource, true);
}

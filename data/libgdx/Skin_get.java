/**
 * Returns a named resource of the specified type.
 * @throws GdxRuntimeException if the resource was not found.
 */
public <T> T get(String name, Class<T> type) {
    if (name == null)
        throw new IllegalArgumentException("name cannot be null.");
    if (type == null)
        throw new IllegalArgumentException("type cannot be null.");
    if (type == Drawable.class)
        return (T) getDrawable(name);
    if (type == TextureRegion.class)
        return (T) getRegion(name);
    if (type == NinePatch.class)
        return (T) getPatch(name);
    if (type == Sprite.class)
        return (T) getSprite(name);
    ObjectMap<String, Object> typeResources = resources.get(type);
    if (typeResources == null)
        throw new GdxRuntimeException("No " + type.getName() + " registered with name: " + name);
    Object resource = typeResources.get(name);
    if (resource == null)
        throw new GdxRuntimeException("No " + type.getName() + " registered with name: " + name);
    return (T) resource;
}

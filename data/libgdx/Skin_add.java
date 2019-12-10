public void add(String name, Object resource, Class type) {
    if (name == null)
        throw new IllegalArgumentException("name cannot be null.");
    if (resource == null)
        throw new IllegalArgumentException("resource cannot be null.");
    ObjectMap<String, Object> typeResources = resources.get(type);
    if (typeResources == null) {
        typeResources = new ObjectMap(type == TextureRegion.class || type == Drawable.class || type == Sprite.class ? 256 : 64);
        resources.put(type, typeResources);
    }
    typeResources.put(name, resource);
}

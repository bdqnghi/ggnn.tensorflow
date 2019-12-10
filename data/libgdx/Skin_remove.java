public void remove(String name, Class type) {
    if (name == null)
        throw new IllegalArgumentException("name cannot be null.");
    ObjectMap<String, Object> typeResources = resources.get(type);
    typeResources.remove(name);
}

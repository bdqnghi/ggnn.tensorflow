public boolean has(String name, Class type) {
    ObjectMap<String, Object> typeResources = resources.get(type);
    if (typeResources == null)
        return false;
    return typeResources.containsKey(name);
}

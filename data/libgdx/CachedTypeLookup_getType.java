Type getType() {
    if (type == null && clazz != null)
        type = ReflectionCache.getType(clazz);
    return type;
}

private String toStorageKey(String key, Object value) {
    if (value instanceof Boolean)
        return prefix + key + "b";
    if (value instanceof Integer)
        return prefix + key + "i";
    if (value instanceof Long)
        return prefix + key + "l";
    if (value instanceof Float)
        return prefix + key + "f";
    return prefix + key + "s";
}

@Override
public Preferences put(Map<String, ?> vals) {
    Set<String> keySet = vals.keySet();
    for (String key : keySet) {
        Object value = vals.get(key);
        if (value instanceof String) {
            putString(key, (String) value);
        } else if (value instanceof Boolean) {
            putBoolean(key, (Boolean) value);
        } else if (value instanceof Integer) {
            putInteger(key, (Integer) value);
        } else if (value instanceof Long) {
            putLong(key, (Long) value);
        } else if (value instanceof Float) {
            putFloat(key, (Float) value);
        }
    }
    return this;
}

public Preferences put(Map<String, ?> vals) {
    for (Entry<String, ?> val : vals.entrySet()) {
        if (val.getValue() instanceof Boolean)
            putBoolean(val.getKey(), (Boolean) val.getValue());
        if (val.getValue() instanceof Integer)
            putInteger(val.getKey(), (Integer) val.getValue());
        if (val.getValue() instanceof Long)
            putLong(val.getKey(), (Long) val.getValue());
        if (val.getValue() instanceof String)
            putString(val.getKey(), (String) val.getValue());
        if (val.getValue() instanceof Float)
            putFloat(val.getKey(), (Float) val.getValue());
    }
    return this;
}

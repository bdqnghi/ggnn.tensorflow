@Override
public Preferences put(Map<String, ?> vals) {
    for (String key : vals.keySet()) {
        values.put(key, vals.get(key));
    }
    return this;
}

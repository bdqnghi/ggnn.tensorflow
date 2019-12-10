@Override
public Preferences putLong(String key, long val) {
    properties.put(key, Long.toString(val));
    return this;
}

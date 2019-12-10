@Override
public Preferences putLong(String key, long val) {
    values.put(key, val);
    return this;
}

@Override
public Preferences putBoolean(String key, boolean val) {
    values.put(key, val);
    return this;
}

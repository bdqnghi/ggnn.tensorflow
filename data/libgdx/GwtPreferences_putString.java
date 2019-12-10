@Override
public Preferences putString(String key, String val) {
    values.put(key, val);
    return this;
}

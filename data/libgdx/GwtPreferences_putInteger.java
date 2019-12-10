@Override
public Preferences putInteger(String key, int val) {
    values.put(key, val);
    return this;
}

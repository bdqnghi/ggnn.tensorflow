@Override
public Preferences putFloat(String key, float val) {
    values.put(key, val);
    return this;
}

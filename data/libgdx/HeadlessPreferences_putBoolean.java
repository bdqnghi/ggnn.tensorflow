@Override
public Preferences putBoolean(String key, boolean val) {
    properties.put(key, Boolean.toString(val));
    return this;
}

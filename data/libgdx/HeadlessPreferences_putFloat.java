@Override
public Preferences putFloat(String key, float val) {
    properties.put(key, Float.toString(val));
    return this;
}

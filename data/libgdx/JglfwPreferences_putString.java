public Preferences putString(String key, String val) {
    properties.put(key, val);
    return this;
}

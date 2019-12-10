public Preferences putInteger(String key, int val) {
    properties.put(key, Integer.toString(val));
    return this;
}

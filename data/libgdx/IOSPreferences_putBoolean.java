@Override
public Preferences putBoolean(String key, boolean val) {
    nsDictionary.put(convertKey(key), NSNumber.valueOf(val));
    return this;
}

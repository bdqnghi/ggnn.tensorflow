@Override
public Preferences putInteger(String key, int val) {
    nsDictionary.put(convertKey(key), NSNumber.valueOf(val));
    return this;
}

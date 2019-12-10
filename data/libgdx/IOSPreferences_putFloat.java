@Override
public Preferences putFloat(String key, float val) {
    nsDictionary.put(convertKey(key), NSNumber.valueOf(val));
    return this;
}

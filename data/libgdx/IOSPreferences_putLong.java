@Override
public Preferences putLong(String key, long val) {
    nsDictionary.put(convertKey(key), NSNumber.valueOf(val));
    return this;
}

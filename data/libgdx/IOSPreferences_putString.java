@Override
public Preferences putString(String key, String val) {
    nsDictionary.put(convertKey(key), new NSString(val));
    return this;
}

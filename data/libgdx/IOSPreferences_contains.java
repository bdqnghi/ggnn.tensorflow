@Override
public boolean contains(String key) {
    return nsDictionary.containsKey(convertKey(key));
}

@Override
public Map<String, ?> get() {
    Map<String, Object> map = new HashMap<String, Object>();
    for (NSString key : nsDictionary.keySet()) {
        NSObject value = nsDictionary.get(key);
        map.put(key.toString(), value.toString());
    }
    return map;
}

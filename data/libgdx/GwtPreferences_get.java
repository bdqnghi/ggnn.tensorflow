@Override
public Map<String, ?> get() {
    HashMap<String, Object> map = new HashMap<String, Object>();
    for (String key : values.keys()) {
        map.put(key, values.get(key));
    }
    return map;
}

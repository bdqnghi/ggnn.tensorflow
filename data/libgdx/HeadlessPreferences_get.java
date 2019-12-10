@Override
public Map<String, ?> get() {
    Map<String, Object> map = new HashMap<String, Object>();
    for (Entry<Object, Object> val : properties.entrySet()) {
        if (val.getValue() instanceof Boolean)
            map.put((String) val.getKey(), (Boolean) Boolean.parseBoolean((String) val.getValue()));
        if (val.getValue() instanceof Integer)
            map.put((String) val.getKey(), (Integer) Integer.parseInt((String) val.getValue()));
        if (val.getValue() instanceof Long)
            map.put((String) val.getKey(), (Long) Long.parseLong((String) val.getValue()));
        if (val.getValue() instanceof String)
            map.put((String) val.getKey(), (String) val.getValue());
        if (val.getValue() instanceof Float)
            map.put((String) val.getKey(), (Float) Float.parseFloat((String) val.getValue()));
    }
    return map;
}

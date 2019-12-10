private Object toObject(String key, String value) {
    if (key.endsWith("b"))
        return new Boolean(Boolean.parseBoolean(value));
    if (key.endsWith("i"))
        return new Integer(Integer.parseInt(value));
    if (key.endsWith("l"))
        return new Long(Long.parseLong(value));
    if (key.endsWith("f"))
        return new Float(Float.parseFloat(value));
    return value;
}

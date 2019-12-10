@Override
public long getLong(String key, long defValue) {
    if (!contains(key))
        return defValue;
    return getLong(key);
}

@Override
public int getInteger(String key, int defValue) {
    if (!contains(key))
        return defValue;
    return getInteger(key);
}

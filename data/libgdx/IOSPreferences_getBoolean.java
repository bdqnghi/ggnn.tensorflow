@Override
public boolean getBoolean(String key, boolean defValue) {
    if (!contains(key))
        return defValue;
    return getBoolean(key);
}

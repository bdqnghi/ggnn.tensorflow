@Override
public float getFloat(String key, float defValue) {
    if (!contains(key))
        return defValue;
    return getFloat(key);
}

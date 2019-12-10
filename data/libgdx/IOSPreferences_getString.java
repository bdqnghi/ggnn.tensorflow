@Override
public String getString(String key, String defValue) {
    if (!contains(key))
        return defValue;
    return getString(key);
}

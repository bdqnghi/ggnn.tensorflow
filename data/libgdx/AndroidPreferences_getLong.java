@Override
public long getLong(String key, long defValue) {
    return sharedPrefs.getLong(key, defValue);
}

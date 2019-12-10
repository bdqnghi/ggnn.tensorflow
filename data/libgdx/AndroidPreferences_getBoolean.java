@Override
public boolean getBoolean(String key, boolean defValue) {
    return sharedPrefs.getBoolean(key, defValue);
}

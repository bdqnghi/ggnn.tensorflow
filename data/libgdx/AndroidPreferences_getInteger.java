@Override
public int getInteger(String key, int defValue) {
    return sharedPrefs.getInt(key, defValue);
}

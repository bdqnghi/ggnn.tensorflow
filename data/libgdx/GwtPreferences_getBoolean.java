@Override
public boolean getBoolean(String key, boolean defValue) {
    Boolean res = (Boolean) values.get(key);
    return res == null ? defValue : res;
}

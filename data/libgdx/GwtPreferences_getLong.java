@Override
public long getLong(String key, long defValue) {
    Long res = (Long) values.get(key);
    return res == null ? defValue : res;
}

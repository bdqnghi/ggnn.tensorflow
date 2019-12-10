@Override
public int getInteger(String key, int defValue) {
    Integer res = (Integer) values.get(key);
    return res == null ? defValue : res;
}

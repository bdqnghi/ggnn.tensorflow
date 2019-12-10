@Override
public String getString(String key, String defValue) {
    String res = (String) values.get(key);
    return res == null ? defValue : res;
}

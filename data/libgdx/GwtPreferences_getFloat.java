@Override
public float getFloat(String key, float defValue) {
    Float res = (Float) values.get(key);
    return res == null ? defValue : res;
}

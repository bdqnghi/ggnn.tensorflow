public float getFloat(String key, float defValue) {
    return Float.parseFloat(properties.getProperty(key, Float.toString(defValue)));
}

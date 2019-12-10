public long getLong(String key, long defValue) {
    return Long.parseLong(properties.getProperty(key, Long.toString(defValue)));
}

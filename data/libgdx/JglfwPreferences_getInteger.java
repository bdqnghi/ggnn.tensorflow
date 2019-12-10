public int getInteger(String key, int defValue) {
    return Integer.parseInt(properties.getProperty(key, Integer.toString(defValue)));
}

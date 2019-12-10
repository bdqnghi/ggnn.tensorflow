@Override
public boolean getBoolean(String key, boolean defValue) {
    return Boolean.parseBoolean(properties.getProperty(key, Boolean.toString(defValue)));
}

@Override
public String getString(String key, String defValue) {
    return properties.getProperty(key, defValue);
}

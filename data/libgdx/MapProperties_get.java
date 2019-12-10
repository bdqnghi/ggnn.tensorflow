/**
 * Returns the object for the given key, casting it to clazz.
 * @param key the key of the object
 * @param defaultValue the default value
 * @param clazz the class of the object
 * @return the object or the defaultValue if the object is not in the map
 * @throws ClassCastException if the object with the given key is not of type clazz
 */
public <T> T get(String key, T defaultValue, Class<T> clazz) {
    Object object = get(key);
    return object == null ? defaultValue : (T) object;
}

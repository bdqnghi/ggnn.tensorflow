/**
 * Gets a string for the given key from this bundle or one of its parents.
 *
 * @param key the key for the desired string
 * @exception NullPointerException if <code>key</code> is <code>null</code>
 * @exception MissingResourceException if no string for the given key can be found and {@link #getExceptionOnMissingKey()}
 *               returns {@code true}
 * @return the string for the given key or the key surrounded by {@code ???} if it cannot be found and
 *         {@link #getExceptionOnMissingKey()} returns {@code false}
 */
public final String get(String key) {
    String result = properties.get(key);
    if (result == null) {
        if (parent != null)
            result = parent.get(key);
        if (result == null) {
            if (exceptionOnMissingKey)
                throw new MissingResourceException("Can't find bundle key " + key, this.getClass().getName(), key);
            else
                return "???" + key + "???";
        }
    }
    return result;
}

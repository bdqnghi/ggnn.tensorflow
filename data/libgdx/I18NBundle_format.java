/**
 * Gets the string with the specified key from this bundle or one of its parent after replacing the given arguments if they
 * occur.
 *
 * @param key the key for the desired string
 * @param args the arguments to be replaced in the string associated to the given key.
 * @exception NullPointerException if <code>key</code> is <code>null</code>
 * @exception MissingResourceException if no string for the given key can be found
 * @return the string for the given key formatted with the given arguments
 */
public String format(String key, Object... args) {
    return formatter.format(get(key), args);
}

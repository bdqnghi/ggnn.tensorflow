/**
 * Returns the old value associated with the specified key, or null.
 */
public V put(K key, V value) {
    if (key == null)
        throw new IllegalArgumentException("key cannot be null.");
    return put_internal(key, value);
}

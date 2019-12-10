/**
 * Returns the number of characters that can be held without growing.
 *
 * @return the capacity
 * @see #ensureCapacity
 * @see #length
 */
public int capacity() {
    return chars.length;
}

/**
 * Trims off any extra capacity beyond the current length. Note, this method is NOT guaranteed to change the capacity of this
 * object.
 *
 * @since 1.5
 */
public void trimToSize() {
    if (length < chars.length) {
        char[] newValue = new char[length];
        System.arraycopy(chars, 0, newValue, 0, length);
        chars = newValue;
    }
}

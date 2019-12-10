/**
 * Returns the current String representation.
 *
 * @return a String containing the characters in this instance.
 */
@Override
public String toString() {
    if (length == 0)
        return "";
    return new String(chars, 0, length);
}

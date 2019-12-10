/**
 * Calculates this buffer's hash code from the remaining chars. The position, limit, capacity and mark don't affect the hash
 * code.
 *
 * @return the hash code calculated from the remaining chars.
 * @since Android 1.0
 */
public int hashCode() {
    int myPosition = position;
    int hash = 0;
    while (myPosition < limit) {
        hash = hash + get(myPosition++);
    }
    return hash;
}

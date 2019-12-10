/**
 * Calculates this buffer's hash code from the remaining chars. The position, limit, capacity and mark don't affect the hash
 * code.
 *
 * @return the hash code calculated from the remaining longs.
 * @since Android 1.0
 */
public int hashCode() {
    int myPosition = position;
    int hash = 0;
    long l;
    while (myPosition < limit) {
        l = get(myPosition++);
        hash = hash + ((int) l) ^ ((int) (l >> 32));
    }
    return hash;
}

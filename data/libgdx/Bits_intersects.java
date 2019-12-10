/**
 * Returns true if the specified BitSet has any bits set to true that are also set to true in this BitSet.
 *
 * @param other a bit set
 * @return boolean indicating whether this bit set intersects the specified bit set
 */
public boolean intersects(Bits other) {
    long[] bits = this.bits;
    long[] otherBits = other.bits;
    for (int i = Math.min(bits.length, otherBits.length) - 1; i >= 0; i--) {
        if ((bits[i] & otherBits[i]) != 0) {
            return true;
        }
    }
    return false;
}

/**
 * Returns true if this bit set is a super set of the specified set, i.e. it has all bits set to true that are also set to true
 * in the specified BitSet.
 *
 * @param other a bit set
 * @return boolean indicating whether this bit set is a super set of the specified set
 */
public boolean containsAll(Bits other) {
    long[] bits = this.bits;
    long[] otherBits = other.bits;
    int otherBitsLength = otherBits.length;
    int bitsLength = bits.length;
    for (int i = bitsLength; i < otherBitsLength; i++) {
        if (otherBits[i] != 0) {
            return false;
        }
    }
    for (int i = Math.min(bitsLength, otherBitsLength) - 1; i >= 0; i--) {
        if ((bits[i] & otherBits[i]) != otherBits[i]) {
            return false;
        }
    }
    return true;
}

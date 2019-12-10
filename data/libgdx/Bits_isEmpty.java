/**
 * @return true if this bitset contains no bits that are set to true
 */
public boolean isEmpty() {
    long[] bits = this.bits;
    int length = bits.length;
    for (int i = 0; i < length; i++) {
        if (bits[i] != 0L) {
            return false;
        }
    }
    return true;
}

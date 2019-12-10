/**
 * Generates random bytes and places them into a user-supplied byte array. The number of random bytes produced is equal to the
 * length of the byte array.
 * <p>
 * This implementation uses {@link #nextLong()} internally.
 */
@Override
public void nextBytes(final byte[] bytes) {
    int n = 0;
    int i = bytes.length;
    while (i != 0) {
        // min(i, 8);
        n = i < 8 ? i : 8;
        for (long bits = nextLong(); n-- != 0; bits >>= 8) bytes[--i] = (byte) bits;
    }
}

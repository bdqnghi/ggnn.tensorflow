private void checkCapacity(int len) {
    if (len >= bits.length) {
        long[] newBits = new long[len + 1];
        System.arraycopy(bits, 0, newBits, 0, bits.length);
        bits = newBits;
    }
}

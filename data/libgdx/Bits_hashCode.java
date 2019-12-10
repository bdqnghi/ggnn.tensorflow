@Override
public int hashCode() {
    final int word = length() >>> 6;
    int hash = 0;
    for (int i = 0; word >= i; i++) {
        hash = 127 * hash + (int) (bits[i] ^ (bits[i] >>> 32));
    }
    return hash;
}

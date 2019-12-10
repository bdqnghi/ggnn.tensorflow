@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Bits other = (Bits) obj;
    long[] otherBits = other.bits;
    int commonWords = Math.min(bits.length, otherBits.length);
    for (int i = 0; commonWords > i; i++) {
        if (bits[i] != otherBits[i])
            return false;
    }
    if (bits.length == otherBits.length)
        return true;
    return length() == other.length();
}

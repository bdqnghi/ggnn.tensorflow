@Override
public int compareTo(Attributes other) {
    if (other == this)
        return 0;
    if (mask != other.mask)
        return mask < other.mask ? -1 : 1;
    sort();
    other.sort();
    for (int i = 0; i < attributes.size; i++) {
        final int c = attributes.get(i).compareTo(other.attributes.get(i));
        if (c != 0)
            return c;
    }
    return 0;
}

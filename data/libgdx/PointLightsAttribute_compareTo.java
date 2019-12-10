@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return type < o.type ? -1 : 1;
    // FIXME implement comparing
    return 0;
}

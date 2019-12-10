@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return (int) (type - o.type);
    return value - ((IntAttribute) o).value;
}

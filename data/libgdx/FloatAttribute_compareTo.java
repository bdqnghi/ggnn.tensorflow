@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return (int) (type - o.type);
    final float v = ((FloatAttribute) o).value;
    return MathUtils.isEqual(value, v) ? 0 : value < v ? -1 : 1;
}

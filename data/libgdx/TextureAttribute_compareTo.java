@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return type < o.type ? -1 : 1;
    TextureAttribute other = (TextureAttribute) o;
    final int c = textureDescription.compareTo(other.textureDescription);
    if (c != 0)
        return c;
    if (uvIndex != other.uvIndex)
        return uvIndex - other.uvIndex;
    if (!MathUtils.isEqual(offsetU, other.offsetU))
        return offsetU < other.offsetU ? 1 : -1;
    if (!MathUtils.isEqual(offsetV, other.offsetV))
        return offsetV < other.offsetV ? 1 : -1;
    if (!MathUtils.isEqual(scaleU, other.scaleU))
        return scaleU < other.scaleU ? 1 : -1;
    if (!MathUtils.isEqual(scaleV, other.scaleV))
        return scaleV < other.scaleV ? 1 : -1;
    return 0;
}

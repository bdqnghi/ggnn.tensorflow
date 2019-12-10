@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return (int) (type - o.type);
    BlendingAttribute other = (BlendingAttribute) o;
    if (blended != other.blended)
        return blended ? 1 : -1;
    if (sourceFunction != other.sourceFunction)
        return sourceFunction - other.sourceFunction;
    if (destFunction != other.destFunction)
        return destFunction - other.destFunction;
    return (MathUtils.isEqual(opacity, other.opacity)) ? 0 : (opacity < other.opacity ? 1 : -1);
}

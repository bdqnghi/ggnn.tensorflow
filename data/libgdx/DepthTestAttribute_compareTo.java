@Override
public int compareTo(Attribute o) {
    if (type != o.type)
        return (int) (type - o.type);
    DepthTestAttribute other = (DepthTestAttribute) o;
    if (depthFunc != other.depthFunc)
        return depthFunc - other.depthFunc;
    if (depthMask != other.depthMask)
        return depthMask ? -1 : 1;
    if (!MathUtils.isEqual(depthRangeNear, other.depthRangeNear))
        return depthRangeNear < other.depthRangeNear ? -1 : 1;
    if (!MathUtils.isEqual(depthRangeFar, other.depthRangeFar))
        return depthRangeFar < other.depthRangeFar ? -1 : 1;
    return 0;
}

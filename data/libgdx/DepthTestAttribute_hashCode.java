@Override
public int hashCode() {
    int result = super.hashCode();
    result = 971 * result + depthFunc;
    result = 971 * result + NumberUtils.floatToRawIntBits(depthRangeNear);
    result = 971 * result + NumberUtils.floatToRawIntBits(depthRangeFar);
    result = 971 * result + (depthMask ? 1 : 0);
    return result;
}

@Override
public int hashCode() {
    int result = super.hashCode();
    result = 991 * result + textureDescription.hashCode();
    result = 991 * result + NumberUtils.floatToRawIntBits(offsetU);
    result = 991 * result + NumberUtils.floatToRawIntBits(offsetV);
    result = 991 * result + NumberUtils.floatToRawIntBits(scaleU);
    result = 991 * result + NumberUtils.floatToRawIntBits(scaleV);
    result = 991 * result + uvIndex;
    return result;
}

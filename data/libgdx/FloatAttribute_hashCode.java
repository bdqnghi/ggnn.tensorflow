@Override
public int hashCode() {
    int result = super.hashCode();
    result = 977 * result + NumberUtils.floatToRawIntBits(value);
    return result;
}

@Override
public int hashCode() {
    int result = super.hashCode();
    result = 947 * result + (blended ? 1 : 0);
    result = 947 * result + sourceFunction;
    result = 947 * result + destFunction;
    result = 947 * result + NumberUtils.floatToRawIntBits(opacity);
    return result;
}

@Override
public int hashCode() {
    int result = (r != +0.0f ? NumberUtils.floatToIntBits(r) : 0);
    result = 31 * result + (g != +0.0f ? NumberUtils.floatToIntBits(g) : 0);
    result = 31 * result + (b != +0.0f ? NumberUtils.floatToIntBits(b) : 0);
    result = 31 * result + (a != +0.0f ? NumberUtils.floatToIntBits(a) : 0);
    return result;
}

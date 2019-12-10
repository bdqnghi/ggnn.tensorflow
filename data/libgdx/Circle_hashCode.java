@Override
public int hashCode() {
    final int prime = 41;
    int result = 1;
    result = prime * result + NumberUtils.floatToRawIntBits(radius);
    result = prime * result + NumberUtils.floatToRawIntBits(x);
    result = prime * result + NumberUtils.floatToRawIntBits(y);
    return result;
}

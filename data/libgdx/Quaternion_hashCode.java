@Override
public int hashCode() {
    final int prime = 31;
    int result = 1;
    result = prime * result + NumberUtils.floatToRawIntBits(w);
    result = prime * result + NumberUtils.floatToRawIntBits(x);
    result = prime * result + NumberUtils.floatToRawIntBits(y);
    result = prime * result + NumberUtils.floatToRawIntBits(z);
    return result;
}

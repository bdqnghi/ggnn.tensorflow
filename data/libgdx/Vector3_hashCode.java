@Override
public int hashCode() {
    final int prime = 31;
    int result = 1;
    result = prime * result + NumberUtils.floatToIntBits(x);
    result = prime * result + NumberUtils.floatToIntBits(y);
    result = prime * result + NumberUtils.floatToIntBits(z);
    return result;
}

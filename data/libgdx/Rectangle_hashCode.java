public int hashCode() {
    final int prime = 31;
    int result = 1;
    result = prime * result + NumberUtils.floatToRawIntBits(height);
    result = prime * result + NumberUtils.floatToRawIntBits(width);
    result = prime * result + NumberUtils.floatToRawIntBits(x);
    result = prime * result + NumberUtils.floatToRawIntBits(y);
    return result;
}

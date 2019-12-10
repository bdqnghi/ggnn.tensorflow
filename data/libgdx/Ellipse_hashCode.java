@Override
public int hashCode() {
    final int prime = 53;
    int result = 1;
    result = prime * result + NumberUtils.floatToRawIntBits(this.height);
    result = prime * result + NumberUtils.floatToRawIntBits(this.width);
    result = prime * result + NumberUtils.floatToRawIntBits(this.x);
    result = prime * result + NumberUtils.floatToRawIntBits(this.y);
    return result;
}

@Override
public int hashCode() {
    final int prime = 71;
    int result = 1;
    result = prime * result + this.center.hashCode();
    result = prime * result + NumberUtils.floatToRawIntBits(this.radius);
    return result;
}

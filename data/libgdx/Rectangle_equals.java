public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Rectangle other = (Rectangle) obj;
    if (NumberUtils.floatToRawIntBits(height) != NumberUtils.floatToRawIntBits(other.height))
        return false;
    if (NumberUtils.floatToRawIntBits(width) != NumberUtils.floatToRawIntBits(other.width))
        return false;
    if (NumberUtils.floatToRawIntBits(x) != NumberUtils.floatToRawIntBits(other.x))
        return false;
    if (NumberUtils.floatToRawIntBits(y) != NumberUtils.floatToRawIntBits(other.y))
        return false;
    return true;
}

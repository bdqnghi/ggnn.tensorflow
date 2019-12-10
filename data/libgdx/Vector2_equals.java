@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Vector2 other = (Vector2) obj;
    if (NumberUtils.floatToIntBits(x) != NumberUtils.floatToIntBits(other.x))
        return false;
    if (NumberUtils.floatToIntBits(y) != NumberUtils.floatToIntBits(other.y))
        return false;
    return true;
}

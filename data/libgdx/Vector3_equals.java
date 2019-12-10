@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Vector3 other = (Vector3) obj;
    if (NumberUtils.floatToIntBits(x) != NumberUtils.floatToIntBits(other.x))
        return false;
    if (NumberUtils.floatToIntBits(y) != NumberUtils.floatToIntBits(other.y))
        return false;
    if (NumberUtils.floatToIntBits(z) != NumberUtils.floatToIntBits(other.z))
        return false;
    return true;
}

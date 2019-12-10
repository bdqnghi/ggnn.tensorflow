@Override
public boolean equals(Object obj) {
    if (this == obj)
        return true;
    if (obj == null)
        return false;
    if (getClass() != obj.getClass())
        return false;
    Vec3 other = (Vec3) obj;
    if (Float.floatToIntBits(x) != Float.floatToIntBits(other.x))
        return false;
    if (Float.floatToIntBits(y) != Float.floatToIntBits(other.y))
        return false;
    if (Float.floatToIntBits(z) != Float.floatToIntBits(other.z))
        return false;
    return true;
}

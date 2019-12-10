@Override
public boolean equals(Object obj) {
    if (this == obj) {
        return true;
    }
    if (obj == null) {
        return false;
    }
    if (!(obj instanceof Quaternion)) {
        return false;
    }
    Quaternion other = (Quaternion) obj;
    return (NumberUtils.floatToRawIntBits(w) == NumberUtils.floatToRawIntBits(other.w)) && (NumberUtils.floatToRawIntBits(x) == NumberUtils.floatToRawIntBits(other.x)) && (NumberUtils.floatToRawIntBits(y) == NumberUtils.floatToRawIntBits(other.y)) && (NumberUtils.floatToRawIntBits(z) == NumberUtils.floatToRawIntBits(other.z));
}

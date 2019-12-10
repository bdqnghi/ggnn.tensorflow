@Override
public boolean isOnLine(Vector3 other) {
    return len2(y * other.z - z * other.y, z * other.x - x * other.z, x * other.y - y * other.x) <= MathUtils.FLOAT_ROUNDING_ERROR;
}

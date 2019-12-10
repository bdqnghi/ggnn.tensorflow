@Override
public boolean isOnLine(Vector2 other, float epsilon) {
    return MathUtils.isZero(x * other.y - y * other.x, epsilon);
}

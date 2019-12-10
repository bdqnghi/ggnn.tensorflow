@Override
public boolean isPerpendicular(Vector2 vector, float epsilon) {
    return MathUtils.isZero(dot(vector), epsilon);
}

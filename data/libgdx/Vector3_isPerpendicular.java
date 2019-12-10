@Override
public boolean isPerpendicular(Vector3 vector, float epsilon) {
    return MathUtils.isZero(dot(vector), epsilon);
}

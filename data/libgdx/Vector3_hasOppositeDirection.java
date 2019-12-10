@Override
public boolean hasOppositeDirection(Vector3 vector) {
    return dot(vector) < 0;
}

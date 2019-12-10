@Override
public boolean hasOppositeDirection(Vector2 vector) {
    return dot(vector) < 0;
}

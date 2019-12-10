@Override
public boolean isCollinear(Vector2 other) {
    return isOnLine(other) && dot(other) > 0f;
}

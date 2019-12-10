@Override
public boolean isCollinearOpposite(Vector2 other) {
    return isOnLine(other) && dot(other) < 0f;
}

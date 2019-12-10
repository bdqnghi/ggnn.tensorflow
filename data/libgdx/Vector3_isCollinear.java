@Override
public boolean isCollinear(Vector3 other) {
    return isOnLine(other) && hasSameDirection(other);
}

@Override
public boolean isCollinearOpposite(Vector3 other) {
    return isOnLine(other) && hasOppositeDirection(other);
}

@Override
public boolean needsCollision(btCollisionObject body0, btCollisionObject body1) {
    if (body0.getUserValue() % 2 == 0 || body1.getUserValue() % 2 == 0)
        return super.needsCollision(body0, body1);
    return false;
}

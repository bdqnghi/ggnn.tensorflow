public Vector2 getLocalAnchorB() {
    Vec2 localAnchor = joint.getLocalAnchorB();
    localAnchorB.set(localAnchor.x, localAnchor.y);
    return localAnchorB;
}

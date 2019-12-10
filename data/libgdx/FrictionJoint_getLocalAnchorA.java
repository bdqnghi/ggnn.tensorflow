public Vector2 getLocalAnchorA() {
    Vec2 localAnchor = joint.getLocalAnchorA();
    localAnchorA.set(localAnchor.x, localAnchor.y);
    return localAnchorA;
}

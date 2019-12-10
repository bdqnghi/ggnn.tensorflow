public void initialize(Body b1, Body b2, Vec2 anchor, Vec2 axis) {
    bodyA = b1;
    bodyB = b2;
    b1.getLocalPointToOut(anchor, localAnchorA);
    b2.getLocalPointToOut(anchor, localAnchorB);
    bodyA.getLocalVectorToOut(axis, localAxisA);
}

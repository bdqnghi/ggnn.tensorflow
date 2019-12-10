/**
 * Initialize the bodies, anchors, and reference angle using the world anchor.
 *
 * @param b1
 * @param b2
 * @param anchor
 */
public void initialize(final Body b1, final Body b2, final Vec2 anchor) {
    bodyA = b1;
    bodyB = b2;
    bodyA.getLocalPointToOut(anchor, localAnchorA);
    bodyB.getLocalPointToOut(anchor, localAnchorB);
    referenceAngle = bodyB.getAngle() - bodyA.getAngle();
}

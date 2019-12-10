/**
 * Initialize the bodies, anchors, and reference angle using a world anchor point.
 *
 * @param bA
 * @param bB
 * @param anchor
 */
public void initialize(Body bA, Body bB, Vec2 anchor) {
    bodyA = bA;
    bodyB = bB;
    bodyA.getLocalPointToOut(anchor, localAnchorA);
    bodyB.getLocalPointToOut(anchor, localAnchorB);
    referenceAngle = bodyB.getAngle() - bodyA.getAngle();
}

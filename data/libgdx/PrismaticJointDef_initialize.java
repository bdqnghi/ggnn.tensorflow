/**
 * Initialize the bodies, anchors, axis, and reference angle using the world anchor and world axis.
 */
public void initialize(Body bodyA, Body bodyB, Vector2 anchor, Vector2 axis) {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    localAnchorA.set(bodyA.getLocalPoint(anchor));
    localAnchorB.set(bodyB.getLocalPoint(anchor));
    localAxisA.set(bodyA.getLocalVector(axis));
    referenceAngle = bodyB.getAngle() - bodyA.getAngle();
}

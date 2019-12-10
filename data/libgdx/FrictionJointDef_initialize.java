/**
 * Initialize the bodies, anchors, axis, and reference angle using the world anchor and world axis.
 */
public void initialize(Body bodyA, Body bodyB, Vector2 anchor) {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    localAnchorA.set(bodyA.getLocalPoint(anchor));
    localAnchorB.set(bodyB.getLocalPoint(anchor));
}

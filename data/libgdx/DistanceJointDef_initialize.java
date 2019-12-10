/**
 * Initialize the bodies, anchors, and length using the world anchors.
 */
public void initialize(Body bodyA, Body bodyB, Vector2 anchorA, Vector2 anchorB) {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    this.localAnchorA.set(bodyA.getLocalPoint(anchorA));
    this.localAnchorB.set(bodyB.getLocalPoint(anchorB));
    this.length = anchorA.dst(anchorB);
}

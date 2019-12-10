/**
 * Initialize the bodies, anchors, lengths, max lengths, and ratio using the world anchors.
 */
public void initialize(Body bodyA, Body bodyB, Vector2 groundAnchorA, Vector2 groundAnchorB, Vector2 anchorA, Vector2 anchorB, float ratio) {
    this.bodyA = bodyA;
    this.bodyB = bodyB;
    this.groundAnchorA.set(groundAnchorA);
    this.groundAnchorB.set(groundAnchorB);
    this.localAnchorA.set(bodyA.getLocalPoint(anchorA));
    this.localAnchorB.set(bodyB.getLocalPoint(anchorB));
    lengthA = anchorA.dst(groundAnchorA);
    lengthB = anchorB.dst(groundAnchorB);
    this.ratio = ratio;
    float C = lengthA + ratio * lengthB;
}

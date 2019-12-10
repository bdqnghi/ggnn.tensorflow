/**
 * Initialize the bodies and offsets using the current transforms.
 */
public void initialize(Body body1, Body body2) {
    this.bodyA = body1;
    this.bodyB = body2;
    this.linearOffset.set(bodyA.getLocalPoint(bodyB.getPosition()));
    this.angularOffset = bodyB.getAngle() - bodyA.getAngle();
}

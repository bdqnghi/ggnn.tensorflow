public org.jbox2d.dynamics.joints.DistanceJointDef toJBox2d() {
    org.jbox2d.dynamics.joints.DistanceJointDef fd = new org.jbox2d.dynamics.joints.DistanceJointDef();
    fd.bodyA = bodyA.body;
    fd.bodyB = bodyB.body;
    fd.collideConnected = collideConnected;
    fd.dampingRatio = dampingRatio;
    fd.frequencyHz = frequencyHz;
    fd.length = length;
    fd.localAnchorA.set(localAnchorA.x, localAnchorA.y);
    fd.localAnchorB.set(localAnchorB.x, localAnchorB.y);
    fd.type = org.jbox2d.dynamics.joints.JointType.DISTANCE;
    return fd;
}

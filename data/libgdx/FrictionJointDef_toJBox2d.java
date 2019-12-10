@Override
public org.jbox2d.dynamics.joints.JointDef toJBox2d() {
    org.jbox2d.dynamics.joints.FrictionJointDef jd = new org.jbox2d.dynamics.joints.FrictionJointDef();
    jd.bodyA = bodyA.body;
    jd.bodyB = bodyB.body;
    jd.collideConnected = collideConnected;
    jd.localAnchorA.set(localAnchorA.x, localAnchorA.y);
    jd.localAnchorB.set(localAnchorB.x, localAnchorB.y);
    jd.maxForce = maxForce;
    jd.maxTorque = maxTorque;
    jd.type = org.jbox2d.dynamics.joints.JointType.FRICTION;
    return jd;
}

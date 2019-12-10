private void drawJoint(Joint joint) {
    Body bodyA = joint.getBodyA();
    Body bodyB = joint.getBodyB();
    Transform xf1 = bodyA.getTransform();
    Transform xf2 = bodyB.getTransform();
    Vector2 x1 = xf1.getPosition();
    Vector2 x2 = xf2.getPosition();
    Vector2 p1 = joint.getAnchorA();
    Vector2 p2 = joint.getAnchorB();
    if (joint.getType() == JointType.DistanceJoint) {
        drawSegment(p1, p2, JOINT_COLOR);
    } else if (joint.getType() == JointType.PulleyJoint) {
        PulleyJoint pulley = (PulleyJoint) joint;
        Vector2 s1 = pulley.getGroundAnchorA();
        Vector2 s2 = pulley.getGroundAnchorB();
        drawSegment(s1, p1, JOINT_COLOR);
        drawSegment(s2, p2, JOINT_COLOR);
        drawSegment(s1, s2, JOINT_COLOR);
    } else if (joint.getType() == JointType.MouseJoint) {
        drawSegment(joint.getAnchorA(), joint.getAnchorB(), JOINT_COLOR);
    } else {
        drawSegment(x1, p1, JOINT_COLOR);
        drawSegment(p1, p2, JOINT_COLOR);
        drawSegment(x2, p2, JOINT_COLOR);
    }
}

private void drawJoint(Joint joint) {
    Body bodyA = joint.getBodyA();
    Body bodyB = joint.getBodyB();
    Transform xf1 = bodyA.getTransform();
    Transform xf2 = bodyB.getTransform();
    Vec2 x1 = xf1.p;
    Vec2 x2 = xf2.p;
    Vec2 p1 = pool.popVec2();
    Vec2 p2 = pool.popVec2();
    joint.getAnchorA(p1);
    joint.getAnchorB(p2);
    color.set(0.5f, 0.8f, 0.8f);
    switch(joint.getType()) {
        // TODO djm write after writing joints
        case DISTANCE:
            m_debugDraw.drawSegment(p1, p2, color);
            break;
        case PULLEY:
            {
                PulleyJoint pulley = (PulleyJoint) joint;
                Vec2 s1 = pulley.getGroundAnchorA();
                Vec2 s2 = pulley.getGroundAnchorB();
                m_debugDraw.drawSegment(s1, p1, color);
                m_debugDraw.drawSegment(s2, p2, color);
                m_debugDraw.drawSegment(s1, s2, color);
            }
            break;
        case CONSTANT_VOLUME:
        case MOUSE:
            // don't draw this
            break;
        default:
            m_debugDraw.drawSegment(x1, p1, color);
            m_debugDraw.drawSegment(p1, p2, color);
            m_debugDraw.drawSegment(x2, p2, color);
    }
    pool.pushVec2(2);
}

public void setTarget(Vec2 target) {
    if (m_bodyB.isAwake() == false) {
        m_bodyB.setAwake(true);
    }
    m_targetA.set(target);
}

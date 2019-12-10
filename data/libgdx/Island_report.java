public void report(ContactVelocityConstraint[] constraints) {
    if (m_listener == null) {
        return;
    }
    for (int i = 0; i < m_contactCount; ++i) {
        Contact c = m_contacts[i];
        ContactVelocityConstraint vc = constraints[i];
        impulse.count = vc.pointCount;
        for (int j = 0; j < vc.pointCount; ++j) {
            impulse.normalImpulses[j] = vc.points[j].normalImpulse;
            impulse.tangentImpulses[j] = vc.points[j].tangentImpulse;
        }
        m_listener.postSolve(c, impulse);
    }
}

public void storeImpulses() {
    for (int i = 0; i < m_count; i++) {
        final ContactVelocityConstraint vc = m_velocityConstraints[i];
        final Manifold manifold = m_contacts[vc.contactIndex].getManifold();
        for (int j = 0; j < vc.pointCount; j++) {
            manifold.points[j].normalImpulse = vc.points[j].normalImpulse;
            manifold.points[j].tangentImpulse = vc.points[j].tangentImpulse;
        }
    }
}

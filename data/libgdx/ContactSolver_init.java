public final void init(ContactSolverDef def) {
    // System.out.println("Initializing contact solver");
    m_step = def.step;
    m_count = def.count;
    if (m_positionConstraints.length < m_count) {
        ContactPositionConstraint[] old = m_positionConstraints;
        m_positionConstraints = new ContactPositionConstraint[MathUtils.max(old.length * 2, m_count)];
        System.arraycopy(old, 0, m_positionConstraints, 0, old.length);
        for (int i = old.length; i < m_positionConstraints.length; i++) {
            m_positionConstraints[i] = new ContactPositionConstraint();
        }
    }
    if (m_velocityConstraints.length < m_count) {
        ContactVelocityConstraint[] old = m_velocityConstraints;
        m_velocityConstraints = new ContactVelocityConstraint[MathUtils.max(old.length * 2, m_count)];
        System.arraycopy(old, 0, m_velocityConstraints, 0, old.length);
        for (int i = old.length; i < m_velocityConstraints.length; i++) {
            m_velocityConstraints[i] = new ContactVelocityConstraint();
        }
    }
    m_positions = def.positions;
    m_velocities = def.velocities;
    m_contacts = def.contacts;
    for (int i = 0; i < m_count; ++i) {
        // System.out.println("contacts: " + m_count);
        final Contact contact = m_contacts[i];
        final Fixture fixtureA = contact.m_fixtureA;
        final Fixture fixtureB = contact.m_fixtureB;
        final Shape shapeA = fixtureA.getShape();
        final Shape shapeB = fixtureB.getShape();
        final float radiusA = shapeA.m_radius;
        final float radiusB = shapeB.m_radius;
        final Body bodyA = fixtureA.getBody();
        final Body bodyB = fixtureB.getBody();
        final Manifold manifold = contact.getManifold();
        int pointCount = manifold.pointCount;
        assert (pointCount > 0);
        ContactVelocityConstraint vc = m_velocityConstraints[i];
        vc.friction = contact.m_friction;
        vc.restitution = contact.m_restitution;
        vc.tangentSpeed = contact.m_tangentSpeed;
        vc.indexA = bodyA.m_islandIndex;
        vc.indexB = bodyB.m_islandIndex;
        vc.invMassA = bodyA.m_invMass;
        vc.invMassB = bodyB.m_invMass;
        vc.invIA = bodyA.m_invI;
        vc.invIB = bodyB.m_invI;
        vc.contactIndex = i;
        vc.pointCount = pointCount;
        vc.K.setZero();
        vc.normalMass.setZero();
        ContactPositionConstraint pc = m_positionConstraints[i];
        pc.indexA = bodyA.m_islandIndex;
        pc.indexB = bodyB.m_islandIndex;
        pc.invMassA = bodyA.m_invMass;
        pc.invMassB = bodyB.m_invMass;
        pc.localCenterA.set(bodyA.m_sweep.localCenter);
        pc.localCenterB.set(bodyB.m_sweep.localCenter);
        pc.invIA = bodyA.m_invI;
        pc.invIB = bodyB.m_invI;
        pc.localNormal.set(manifold.localNormal);
        pc.localPoint.set(manifold.localPoint);
        pc.pointCount = pointCount;
        pc.radiusA = radiusA;
        pc.radiusB = radiusB;
        pc.type = manifold.type;
        // System.out.println("contact point count: " + pointCount);
        for (int j = 0; j < pointCount; j++) {
            ManifoldPoint cp = manifold.points[j];
            VelocityConstraintPoint vcp = vc.points[j];
            if (m_step.warmStarting) {
                // assert(cp.normalImpulse == 0);
                // System.out.println("contact normal impulse: " + cp.normalImpulse);
                vcp.normalImpulse = m_step.dtRatio * cp.normalImpulse;
                vcp.tangentImpulse = m_step.dtRatio * cp.tangentImpulse;
            } else {
                vcp.normalImpulse = 0;
                vcp.tangentImpulse = 0;
            }
            vcp.rA.setZero();
            vcp.rB.setZero();
            vcp.normalMass = 0;
            vcp.tangentMass = 0;
            vcp.velocityBias = 0;
            pc.localPoints[j].x = cp.localPoint.x;
            pc.localPoints[j].y = cp.localPoint.y;
        }
    }
}

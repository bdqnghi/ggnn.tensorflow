public void solve(Profile profile, TimeStep step, Vec2 gravity, boolean allowSleep) {
    // System.out.println("Solving Island");
    float h = step.dt;
    // Integrate velocities and apply damping. Initialize the body state.
    for (int i = 0; i < m_bodyCount; ++i) {
        final Body b = m_bodies[i];
        final Sweep bm_sweep = b.m_sweep;
        final Vec2 c = bm_sweep.c;
        float a = bm_sweep.a;
        final Vec2 v = b.m_linearVelocity;
        float w = b.m_angularVelocity;
        // Store positions for continuous collision.
        bm_sweep.c0.set(bm_sweep.c);
        bm_sweep.a0 = bm_sweep.a;
        if (b.m_type == BodyType.DYNAMIC) {
            // Integrate velocities.
            // v += h * (b.m_gravityScale * gravity + b.m_invMass * b.m_force);
            v.x += h * (b.m_gravityScale * gravity.x + b.m_invMass * b.m_force.x);
            v.y += h * (b.m_gravityScale * gravity.y + b.m_invMass * b.m_force.y);
            w += h * b.m_invI * b.m_torque;
            // Apply damping.
            // ODE: dv/dt + c * v = 0
            // Solution: v(t) = v0 * exp(-c * t)
            // Time step: v(t + dt) = v0 * exp(-c * (t + dt)) = v0 * exp(-c * t) * exp(-c * dt) = v *
            // exp(-c * dt)
            // v2 = exp(-c * dt) * v1
            // Pade approximation:
            // v2 = v1 * 1 / (1 + c * dt)
            v.x *= 1.0f / (1.0f + h * b.m_linearDamping);
            v.y *= 1.0f / (1.0f + h * b.m_linearDamping);
            w *= 1.0f / (1.0f + h * b.m_angularDamping);
        }
        m_positions[i].c.x = c.x;
        m_positions[i].c.y = c.y;
        m_positions[i].a = a;
        m_velocities[i].v.x = v.x;
        m_velocities[i].v.y = v.y;
        m_velocities[i].w = w;
    }
    timer.reset();
    // Solver data
    solverData.step = step;
    solverData.positions = m_positions;
    solverData.velocities = m_velocities;
    // Initialize velocity constraints.
    solverDef.step = step;
    solverDef.contacts = m_contacts;
    solverDef.count = m_contactCount;
    solverDef.positions = m_positions;
    solverDef.velocities = m_velocities;
    contactSolver.init(solverDef);
    // System.out.println("island init vel");
    contactSolver.initializeVelocityConstraints();
    if (step.warmStarting) {
        // System.out.println("island warm start");
        contactSolver.warmStart();
    }
    for (int i = 0; i < m_jointCount; ++i) {
        m_joints[i].initVelocityConstraints(solverData);
    }
    profile.solveInit.accum(timer.getMilliseconds());
    // Solve velocity constraints
    timer.reset();
    // System.out.println("island solving velocities");
    for (int i = 0; i < step.velocityIterations; ++i) {
        for (int j = 0; j < m_jointCount; ++j) {
            m_joints[j].solveVelocityConstraints(solverData);
        }
        contactSolver.solveVelocityConstraints();
    }
    // Store impulses for warm starting
    contactSolver.storeImpulses();
    profile.solveVelocity.accum(timer.getMilliseconds());
    // Integrate positions
    for (int i = 0; i < m_bodyCount; ++i) {
        final Vec2 c = m_positions[i].c;
        float a = m_positions[i].a;
        final Vec2 v = m_velocities[i].v;
        float w = m_velocities[i].w;
        // Check for large velocities
        float translationx = v.x * h;
        float translationy = v.y * h;
        if (translationx * translationx + translationy * translationy > Settings.maxTranslationSquared) {
            float ratio = Settings.maxTranslation / MathUtils.sqrt(translationx * translationx + translationy * translationy);
            v.x *= ratio;
            v.y *= ratio;
        }
        float rotation = h * w;
        if (rotation * rotation > Settings.maxRotationSquared) {
            float ratio = Settings.maxRotation / MathUtils.abs(rotation);
            w *= ratio;
        }
        // Integrate
        c.x += h * v.x;
        c.y += h * v.y;
        a += h * w;
        m_positions[i].a = a;
        m_velocities[i].w = w;
    }
    // Solve position constraints
    timer.reset();
    boolean positionSolved = false;
    for (int i = 0; i < step.positionIterations; ++i) {
        boolean contactsOkay = contactSolver.solvePositionConstraints();
        boolean jointsOkay = true;
        for (int j = 0; j < m_jointCount; ++j) {
            boolean jointOkay = m_joints[j].solvePositionConstraints(solverData);
            jointsOkay = jointsOkay && jointOkay;
        }
        if (contactsOkay && jointsOkay) {
            // Exit early if the position errors are small.
            positionSolved = true;
            break;
        }
    }
    // Copy state buffers back to the bodies
    for (int i = 0; i < m_bodyCount; ++i) {
        Body body = m_bodies[i];
        body.m_sweep.c.x = m_positions[i].c.x;
        body.m_sweep.c.y = m_positions[i].c.y;
        body.m_sweep.a = m_positions[i].a;
        body.m_linearVelocity.x = m_velocities[i].v.x;
        body.m_linearVelocity.y = m_velocities[i].v.y;
        body.m_angularVelocity = m_velocities[i].w;
        body.synchronizeTransform();
    }
    profile.solvePosition.accum(timer.getMilliseconds());
    report(contactSolver.m_velocityConstraints);
    if (allowSleep) {
        float minSleepTime = Float.MAX_VALUE;
        final float linTolSqr = Settings.linearSleepTolerance * Settings.linearSleepTolerance;
        final float angTolSqr = Settings.angularSleepTolerance * Settings.angularSleepTolerance;
        for (int i = 0; i < m_bodyCount; ++i) {
            Body b = m_bodies[i];
            if (b.getType() == BodyType.STATIC) {
                continue;
            }
            if ((b.m_flags & Body.e_autoSleepFlag) == 0 || b.m_angularVelocity * b.m_angularVelocity > angTolSqr || Vec2.dot(b.m_linearVelocity, b.m_linearVelocity) > linTolSqr) {
                b.m_sleepTime = 0.0f;
                minSleepTime = 0.0f;
            } else {
                b.m_sleepTime += h;
                minSleepTime = MathUtils.min(minSleepTime, b.m_sleepTime);
            }
        }
        if (minSleepTime >= Settings.timeToSleep && positionSolved) {
            for (int i = 0; i < m_bodyCount; ++i) {
                Body b = m_bodies[i];
                b.setAwake(false);
            }
        }
    }
}

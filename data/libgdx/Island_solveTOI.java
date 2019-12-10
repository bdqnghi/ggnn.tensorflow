public void solveTOI(TimeStep subStep, int toiIndexA, int toiIndexB) {
    assert (toiIndexA < m_bodyCount);
    assert (toiIndexB < m_bodyCount);
    // Initialize the body state.
    for (int i = 0; i < m_bodyCount; ++i) {
        m_positions[i].c.x = m_bodies[i].m_sweep.c.x;
        m_positions[i].c.y = m_bodies[i].m_sweep.c.y;
        m_positions[i].a = m_bodies[i].m_sweep.a;
        m_velocities[i].v.x = m_bodies[i].m_linearVelocity.x;
        m_velocities[i].v.y = m_bodies[i].m_linearVelocity.y;
        m_velocities[i].w = m_bodies[i].m_angularVelocity;
    }
    toiSolverDef.contacts = m_contacts;
    toiSolverDef.count = m_contactCount;
    toiSolverDef.step = subStep;
    toiSolverDef.positions = m_positions;
    toiSolverDef.velocities = m_velocities;
    toiContactSolver.init(toiSolverDef);
    // Solve position constraints.
    for (int i = 0; i < subStep.positionIterations; ++i) {
        boolean contactsOkay = toiContactSolver.solveTOIPositionConstraints(toiIndexA, toiIndexB);
        if (contactsOkay) {
            break;
        }
    }
    // #if 0
    // // Is the new position really safe?
    // for (int i = 0; i < m_contactCount; ++i)
    // {
    // Contact* c = m_contacts[i];
    // Fixture* fA = c.GetFixtureA();
    // Fixture* fB = c.GetFixtureB();
    // 
    // Body bA = fA.GetBody();
    // Body bB = fB.GetBody();
    // 
    // int indexA = c.GetChildIndexA();
    // int indexB = c.GetChildIndexB();
    // 
    // DistanceInput input;
    // input.proxyA.Set(fA.GetShape(), indexA);
    // input.proxyB.Set(fB.GetShape(), indexB);
    // input.transformA = bA.GetTransform();
    // input.transformB = bB.GetTransform();
    // input.useRadii = false;
    // 
    // DistanceOutput output;
    // SimplexCache cache;
    // cache.count = 0;
    // Distance(&output, &cache, &input);
    // 
    // if (output.distance == 0 || cache.count == 3)
    // {
    // cache.count += 0;
    // }
    // }
    // #endif
    // Leap of faith to new safe state.
    m_bodies[toiIndexA].m_sweep.c0.x = m_positions[toiIndexA].c.x;
    m_bodies[toiIndexA].m_sweep.c0.y = m_positions[toiIndexA].c.y;
    m_bodies[toiIndexA].m_sweep.a0 = m_positions[toiIndexA].a;
    m_bodies[toiIndexB].m_sweep.c0.set(m_positions[toiIndexB].c);
    m_bodies[toiIndexB].m_sweep.a0 = m_positions[toiIndexB].a;
    // No warm starting is needed for TOI events because warm
    // starting impulses were applied in the discrete solver.
    toiContactSolver.initializeVelocityConstraints();
    // Solve velocity constraints.
    for (int i = 0; i < subStep.velocityIterations; ++i) {
        toiContactSolver.solveVelocityConstraints();
    }
    // Don't store the TOI contact forces for warm starting
    // because they can be quite large.
    float h = subStep.dt;
    // Integrate positions
    for (int i = 0; i < m_bodyCount; ++i) {
        Vec2 c = m_positions[i].c;
        float a = m_positions[i].a;
        Vec2 v = m_velocities[i].v;
        float w = m_velocities[i].w;
        // Check for large velocities
        float translationx = v.x * h;
        float translationy = v.y * h;
        if (translationx * translationx + translationy * translationy > Settings.maxTranslationSquared) {
            float ratio = Settings.maxTranslation / MathUtils.sqrt(translationx * translationx + translationy * translationy);
            v.mulLocal(ratio);
        }
        float rotation = h * w;
        if (rotation * rotation > Settings.maxRotationSquared) {
            float ratio = Settings.maxRotation / MathUtils.abs(rotation);
            w *= ratio;
        }
        // Integrate
        c.x += v.x * h;
        c.y += v.y * h;
        a += h * w;
        m_positions[i].c.x = c.x;
        m_positions[i].c.y = c.y;
        m_positions[i].a = a;
        m_velocities[i].v.x = v.x;
        m_velocities[i].v.y = v.y;
        m_velocities[i].w = w;
        // Sync bodies
        Body body = m_bodies[i];
        body.m_sweep.c.x = c.x;
        body.m_sweep.c.y = c.y;
        body.m_sweep.a = a;
        body.m_linearVelocity.x = v.x;
        body.m_linearVelocity.y = v.y;
        body.m_angularVelocity = w;
        body.synchronizeTransform();
    }
    report(toiContactSolver.m_velocityConstraints);
}

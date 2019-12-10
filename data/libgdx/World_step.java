/**
 * Take a time step. This performs collision detection, integration, and constraint solution.
 *
 * @param timeStep the amount of time to simulate, this should not vary.
 * @param velocityIterations for the velocity constraint solver.
 * @param positionIterations for the position constraint solver.
 */
public void step(float dt, int velocityIterations, int positionIterations) {
    stepTimer.reset();
    tempTimer.reset();
    // If new fixtures were added, we need to find the new contacts.
    if ((m_flags & NEW_FIXTURE) == NEW_FIXTURE) {
        // log.debug("There's a new fixture, lets look for new contacts");
        m_contactManager.findNewContacts();
        m_flags &= ~NEW_FIXTURE;
    }
    m_flags |= LOCKED;
    step.dt = dt;
    step.velocityIterations = velocityIterations;
    step.positionIterations = positionIterations;
    if (dt > 0.0f) {
        step.inv_dt = 1.0f / dt;
    } else {
        step.inv_dt = 0.0f;
    }
    step.dtRatio = m_inv_dt0 * dt;
    step.warmStarting = m_warmStarting;
    m_profile.stepInit.record(tempTimer.getMilliseconds());
    // Update contacts. This is where some contacts are destroyed.
    tempTimer.reset();
    m_contactManager.collide();
    m_profile.collide.record(tempTimer.getMilliseconds());
    // Integrate velocities, solve velocity constraints, and integrate positions.
    if (m_stepComplete && step.dt > 0.0f) {
        tempTimer.reset();
        // Particle Simulation
        m_particleSystem.solve(step);
        m_profile.solveParticleSystem.record(tempTimer.getMilliseconds());
        tempTimer.reset();
        solve(step);
        m_profile.solve.record(tempTimer.getMilliseconds());
    }
    // Handle TOI events.
    if (m_continuousPhysics && step.dt > 0.0f) {
        tempTimer.reset();
        solveTOI(step);
        m_profile.solveTOI.record(tempTimer.getMilliseconds());
    }
    if (step.dt > 0.0f) {
        m_inv_dt0 = step.inv_dt;
    }
    if ((m_flags & CLEAR_FORCES) == CLEAR_FORCES) {
        clearForces();
    }
    m_flags &= ~LOCKED;
    // log.debug("ending step");
    m_profile.step.record(stepTimer.getMilliseconds());
}

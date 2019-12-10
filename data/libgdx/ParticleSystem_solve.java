public void solve(TimeStep step) {
    ++m_timestamp;
    if (m_count == 0) {
        return;
    }
    m_allParticleFlags = 0;
    for (int i = 0; i < m_count; i++) {
        m_allParticleFlags |= m_flagsBuffer.data[i];
    }
    if ((m_allParticleFlags & ParticleType.b2_zombieParticle) != 0) {
        solveZombie();
    }
    if (m_count == 0) {
        return;
    }
    m_allGroupFlags = 0;
    for (ParticleGroup group = m_groupList; group != null; group = group.getNext()) {
        m_allGroupFlags |= group.m_groupFlags;
    }
    final float gravityx = step.dt * m_gravityScale * m_world.getGravity().x;
    final float gravityy = step.dt * m_gravityScale * m_world.getGravity().y;
    float criticalVelocytySquared = getCriticalVelocitySquared(step);
    for (int i = 0; i < m_count; i++) {
        Vec2 v = m_velocityBuffer.data[i];
        v.x += gravityx;
        v.y += gravityy;
        float v2 = v.x * v.x + v.y * v.y;
        if (v2 > criticalVelocytySquared) {
            float a = v2 == 0 ? Float.MAX_VALUE : MathUtils.sqrt(criticalVelocytySquared / v2);
            v.x *= a;
            v.y *= a;
        }
    }
    solveCollision(step);
    if ((m_allGroupFlags & ParticleGroupType.b2_rigidParticleGroup) != 0) {
        solveRigid(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_wallParticle) != 0) {
        solveWall(step);
    }
    for (int i = 0; i < m_count; i++) {
        Vec2 pos = m_positionBuffer.data[i];
        Vec2 vel = m_velocityBuffer.data[i];
        pos.x += step.dt * vel.x;
        pos.y += step.dt * vel.y;
    }
    updateBodyContacts();
    updateContacts(false);
    if ((m_allParticleFlags & ParticleType.b2_viscousParticle) != 0) {
        solveViscous(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_powderParticle) != 0) {
        solvePowder(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_tensileParticle) != 0) {
        solveTensile(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_elasticParticle) != 0) {
        solveElastic(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_springParticle) != 0) {
        solveSpring(step);
    }
    if ((m_allGroupFlags & ParticleGroupType.b2_solidParticleGroup) != 0) {
        solveSolid(step);
    }
    if ((m_allParticleFlags & ParticleType.b2_colorMixingParticle) != 0) {
        solveColorMixing(step);
    }
    solvePressure(step);
    solveDamping(step);
}

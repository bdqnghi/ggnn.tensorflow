@Override
public void initVelocityConstraints(final SolverData data) {
    m_indexB = m_bodyB.m_islandIndex;
    m_localCenterB.set(m_bodyB.m_sweep.localCenter);
    m_invMassB = m_bodyB.m_invMass;
    m_invIB = m_bodyB.m_invI;
    Vec2 cB = data.positions[m_indexB].c;
    float aB = data.positions[m_indexB].a;
    Vec2 vB = data.velocities[m_indexB].v;
    float wB = data.velocities[m_indexB].w;
    final Rot qB = pool.popRot();
    qB.set(aB);
    float mass = m_bodyB.getMass();
    // Frequency
    float omega = 2.0f * MathUtils.PI * m_frequencyHz;
    // Damping coefficient
    float d = 2.0f * mass * m_dampingRatio * omega;
    // Spring stiffness
    float k = mass * (omega * omega);
    // magic formulas
    // gamma has units of inverse mass.
    // beta has units of inverse time.
    float h = data.step.dt;
    assert (d + h * k > Settings.EPSILON);
    m_gamma = h * (d + h * k);
    if (m_gamma != 0.0f) {
        m_gamma = 1.0f / m_gamma;
    }
    m_beta = h * k * m_gamma;
    Vec2 temp = pool.popVec2();
    // Compute the effective mass matrix.
    Rot.mulToOutUnsafe(qB, temp.set(m_localAnchorB).subLocal(m_localCenterB), m_rB);
    // K = [(1/m1 + 1/m2) * eye(2) - skew(r1) * invI1 * skew(r1) - skew(r2) * invI2 * skew(r2)]
    // = [1/m1+1/m2 0 ] + invI1 * [r1.y*r1.y -r1.x*r1.y] + invI2 * [r1.y*r1.y -r1.x*r1.y]
    // [ 0 1/m1+1/m2] [-r1.x*r1.y r1.x*r1.x] [-r1.x*r1.y r1.x*r1.x]
    final Mat22 K = pool.popMat22();
    K.ex.x = m_invMassB + m_invIB * m_rB.y * m_rB.y + m_gamma;
    K.ex.y = -m_invIB * m_rB.x * m_rB.y;
    K.ey.x = K.ex.y;
    K.ey.y = m_invMassB + m_invIB * m_rB.x * m_rB.x + m_gamma;
    K.invertToOut(m_mass);
    m_C.set(cB).addLocal(m_rB).subLocal(m_targetA);
    m_C.mulLocal(m_beta);
    // Cheat with some damping
    wB *= 0.98f;
    if (data.step.warmStarting) {
        m_impulse.mulLocal(data.step.dtRatio);
        vB.x += m_invMassB * m_impulse.x;
        vB.y += m_invMassB * m_impulse.y;
        wB += m_invIB * Vec2.cross(m_rB, m_impulse);
    } else {
        m_impulse.setZero();
    }
    // data.velocities[m_indexB].v.set(vB);
    data.velocities[m_indexB].w = wB;
    pool.pushVec2(1);
    pool.pushMat22(1);
    pool.pushRot(1);
}

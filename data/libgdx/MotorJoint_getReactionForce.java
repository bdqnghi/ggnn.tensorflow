public void getReactionForce(float inv_dt, Vec2 out) {
    out.set(m_linearImpulse).mulLocal(inv_dt);
}

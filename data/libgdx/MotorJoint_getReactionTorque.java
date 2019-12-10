public float getReactionTorque(float inv_dt) {
    return m_angularImpulse * inv_dt;
}

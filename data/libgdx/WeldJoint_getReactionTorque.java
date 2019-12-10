@Override
public float getReactionTorque(float inv_dt) {
    return inv_dt * m_impulse.z;
}

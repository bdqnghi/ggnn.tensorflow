@Override
public void getReactionForce(float inv_dt, Vec2 argOut) {
    argOut.set(m_impulse.x, m_impulse.y);
    argOut.mulLocal(inv_dt);
}

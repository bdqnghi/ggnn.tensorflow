@Override
public void getReactionForce(float invDt, Vec2 argOut) {
    argOut.set(m_impulse).mulLocal(invDt);
}

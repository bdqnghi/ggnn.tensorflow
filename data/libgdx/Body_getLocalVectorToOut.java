public final void getLocalVectorToOut(Vec2 worldVector, Vec2 out) {
    Rot.mulTrans(m_xf.q, worldVector, out);
}

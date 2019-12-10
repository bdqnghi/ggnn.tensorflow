public final void getLocalVectorToOutUnsafe(Vec2 worldVector, Vec2 out) {
    Rot.mulTransUnsafe(m_xf.q, worldVector, out);
}

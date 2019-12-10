public final void getWorldVectorToOutUnsafe(Vec2 localVector, Vec2 out) {
    Rot.mulToOutUnsafe(m_xf.q, localVector, out);
}

public final void getWorldVectorToOut(Vec2 localVector, Vec2 out) {
    Rot.mulToOut(m_xf.q, localVector, out);
}

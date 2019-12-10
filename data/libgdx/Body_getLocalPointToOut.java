public final void getLocalPointToOut(Vec2 worldPoint, Vec2 out) {
    Transform.mulTransToOut(m_xf, worldPoint, out);
}

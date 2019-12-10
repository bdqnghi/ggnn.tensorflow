public final void getWorldPointToOut(Vec2 localPoint, Vec2 out) {
    Transform.mulToOut(m_xf, localPoint, out);
}

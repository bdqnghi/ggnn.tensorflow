public final void getLinearVelocityFromWorldPointToOut(Vec2 worldPoint, Vec2 out) {
    final float tempX = worldPoint.x - m_sweep.c.x;
    final float tempY = worldPoint.y - m_sweep.c.y;
    out.x = -m_angularVelocity * tempY + m_linearVelocity.x;
    out.y = m_angularVelocity * tempX + m_linearVelocity.y;
}

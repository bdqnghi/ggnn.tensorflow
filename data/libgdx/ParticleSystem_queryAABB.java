public void queryAABB(ParticleQueryCallback callback, final AABB aabb) {
    if (m_proxyCount == 0) {
        return;
    }
    final float lowerBoundX = aabb.lowerBound.x;
    final float lowerBoundY = aabb.lowerBound.y;
    final float upperBoundX = aabb.upperBound.x;
    final float upperBoundY = aabb.upperBound.y;
    int firstProxy = lowerBound(m_proxyBuffer, m_proxyCount, computeTag(m_inverseDiameter * lowerBoundX, m_inverseDiameter * lowerBoundY));
    int lastProxy = upperBound(m_proxyBuffer, m_proxyCount, computeTag(m_inverseDiameter * upperBoundX, m_inverseDiameter * upperBoundY));
    for (int proxy = firstProxy; proxy < lastProxy; ++proxy) {
        int i = m_proxyBuffer[proxy].index;
        final Vec2 p = m_positionBuffer.data[i];
        if (lowerBoundX < p.x && p.x < upperBoundX && lowerBoundY < p.y && p.y < upperBoundY) {
            if (!callback.reportParticle(i)) {
                break;
            }
        }
    }
}

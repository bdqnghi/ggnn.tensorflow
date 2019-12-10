/**
 * This is called from DynamicTree::query when we are gathering pairs.
 */
public final boolean treeCallback(int proxyId) {
    // A proxy cannot form a pair with itself.
    if (proxyId == m_queryProxyId) {
        return true;
    }
    // Grow the pair buffer as needed.
    if (m_pairCount == m_pairCapacity) {
        Pair[] oldBuffer = m_pairBuffer;
        m_pairCapacity *= 2;
        m_pairBuffer = new Pair[m_pairCapacity];
        System.arraycopy(oldBuffer, 0, m_pairBuffer, 0, oldBuffer.length);
        for (int i = oldBuffer.length; i < m_pairCapacity; i++) {
            m_pairBuffer[i] = new Pair();
        }
    }
    if (proxyId < m_queryProxyId) {
        m_pairBuffer[m_pairCount].proxyIdA = proxyId;
        m_pairBuffer[m_pairCount].proxyIdB = m_queryProxyId;
    } else {
        m_pairBuffer[m_pairCount].proxyIdA = m_queryProxyId;
        m_pairBuffer[m_pairCount].proxyIdB = proxyId;
    }
    ++m_pairCount;
    return true;
}

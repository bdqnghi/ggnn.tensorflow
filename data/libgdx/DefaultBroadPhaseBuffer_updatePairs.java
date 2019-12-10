@Override
public final void updatePairs(PairCallback callback) {
    // Reset pair buffer
    m_pairCount = 0;
    // Perform tree queries for all moving proxies.
    for (int i = 0; i < m_moveCount; ++i) {
        m_queryProxyId = m_moveBuffer[i];
        if (m_queryProxyId == NULL_PROXY) {
            continue;
        }
        // We have to query the tree with the fat AABB so that
        // we don't fail to create a pair that may touch later.
        final AABB fatAABB = m_tree.getFatAABB(m_queryProxyId);
        // Query tree, create pairs and add them pair buffer.
        // log.debug("quering aabb: "+m_queryProxy.aabb);
        m_tree.query(this, fatAABB);
    }
    // log.debug("Number of pairs found: "+m_pairCount);
    // Reset move buffer
    m_moveCount = 0;
    // Sort the pair buffer to expose duplicates.
    Arrays.sort(m_pairBuffer, 0, m_pairCount);
    // Send the pairs back to the client.
    int i = 0;
    while (i < m_pairCount) {
        Pair primaryPair = m_pairBuffer[i];
        Object userDataA = m_tree.getUserData(primaryPair.proxyIdA);
        Object userDataB = m_tree.getUserData(primaryPair.proxyIdB);
        // log.debug("returning pair: "+userDataA+", "+userDataB);
        callback.addPair(userDataA, userDataB);
        ++i;
        // Skip any duplicate pairs.
        while (i < m_pairCount) {
            Pair pair = m_pairBuffer[i];
            if (pair.proxyIdA != primaryPair.proxyIdA || pair.proxyIdB != primaryPair.proxyIdB) {
                break;
            }
            ++i;
        }
    }
}

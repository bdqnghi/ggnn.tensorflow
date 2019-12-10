@Override
public boolean testOverlap(int proxyIdA, int proxyIdB) {
    // return AABB.testOverlap(proxyA.aabb, proxyB.aabb);
    // return m_tree.overlap(proxyIdA, proxyIdB);
    final AABB a = m_tree.getFatAABB(proxyIdA);
    final AABB b = m_tree.getFatAABB(proxyIdB);
    if (b.lowerBound.x - a.upperBound.x > 0.0f || b.lowerBound.y - a.upperBound.y > 0.0f) {
        return false;
    }
    if (a.lowerBound.x - b.upperBound.x > 0.0f || a.lowerBound.y - b.upperBound.y > 0.0f) {
        return false;
    }
    return true;
}

@Override
public final int createProxy(final AABB aabb, Object userData) {
    final int node = allocateNode();
    // Fatten the aabb
    final AABB nodeAABB = m_aabb[node];
    nodeAABB.lowerBound.x = aabb.lowerBound.x - Settings.aabbExtension;
    nodeAABB.lowerBound.y = aabb.lowerBound.y - Settings.aabbExtension;
    nodeAABB.upperBound.x = aabb.upperBound.x + Settings.aabbExtension;
    nodeAABB.upperBound.y = aabb.upperBound.y + Settings.aabbExtension;
    m_userData[node] = userData;
    insertLeaf(node);
    return node;
}

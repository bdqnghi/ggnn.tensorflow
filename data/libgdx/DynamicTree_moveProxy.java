@Override
public final boolean moveProxy(int proxyId, final AABB aabb, Vec2 displacement) {
    assert (aabb.isValid());
    assert (0 <= proxyId && proxyId < m_nodeCapacity);
    final DynamicTreeNode node = m_nodes[proxyId];
    assert (node.child1 == null);
    final AABB nodeAABB = node.aabb;
    // if (nodeAABB.contains(aabb)) {
    if (nodeAABB.lowerBound.x <= aabb.lowerBound.x && nodeAABB.lowerBound.y <= aabb.lowerBound.y && aabb.upperBound.x <= nodeAABB.upperBound.x && aabb.upperBound.y <= nodeAABB.upperBound.y) {
        return false;
    }
    removeLeaf(node);
    // Extend AABB
    final Vec2 lowerBound = nodeAABB.lowerBound;
    final Vec2 upperBound = nodeAABB.upperBound;
    lowerBound.x = aabb.lowerBound.x - Settings.aabbExtension;
    lowerBound.y = aabb.lowerBound.y - Settings.aabbExtension;
    upperBound.x = aabb.upperBound.x + Settings.aabbExtension;
    upperBound.y = aabb.upperBound.y + Settings.aabbExtension;
    // Predict AABB displacement.
    final float dx = displacement.x * Settings.aabbMultiplier;
    final float dy = displacement.y * Settings.aabbMultiplier;
    if (dx < 0.0f) {
        lowerBound.x += dx;
    } else {
        upperBound.x += dx;
    }
    if (dy < 0.0f) {
        lowerBound.y += dy;
    } else {
        upperBound.y += dy;
    }
    insertLeaf(proxyId);
    return true;
}

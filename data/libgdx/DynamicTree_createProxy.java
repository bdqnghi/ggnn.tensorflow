@Override
public final int createProxy(final AABB aabb, Object userData) {
    assert (aabb.isValid());
    final DynamicTreeNode node = allocateNode();
    int proxyId = node.id;
    // Fatten the aabb
    final AABB nodeAABB = node.aabb;
    nodeAABB.lowerBound.x = aabb.lowerBound.x - Settings.aabbExtension;
    nodeAABB.lowerBound.y = aabb.lowerBound.y - Settings.aabbExtension;
    nodeAABB.upperBound.x = aabb.upperBound.x + Settings.aabbExtension;
    nodeAABB.upperBound.y = aabb.upperBound.y + Settings.aabbExtension;
    node.userData = userData;
    insertLeaf(proxyId);
    return proxyId;
}

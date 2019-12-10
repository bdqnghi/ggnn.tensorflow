@Override
public final void moveProxy(int proxyId, final AABB aabb, final Vec2 displacement) {
    boolean buffer = m_tree.moveProxy(proxyId, aabb, displacement);
    if (buffer) {
        bufferMove(proxyId);
    }
}

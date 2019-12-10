@Override
public final void destroyProxy(int proxyId) {
    unbufferMove(proxyId);
    --m_proxyCount;
    m_tree.destroyProxy(proxyId);
}

private void expandBuffers(int oldSize, int newSize) {
    m_aabb = BufferUtils.reallocateBuffer(AABB.class, m_aabb, oldSize, newSize);
    m_userData = BufferUtils.reallocateBuffer(Object.class, m_userData, oldSize, newSize);
    m_parent = BufferUtils.reallocateBuffer(m_parent, oldSize, newSize);
    m_child1 = BufferUtils.reallocateBuffer(m_child1, oldSize, newSize);
    m_child2 = BufferUtils.reallocateBuffer(m_child2, oldSize, newSize);
    m_height = BufferUtils.reallocateBuffer(m_height, oldSize, newSize);
    // Build a linked list for the free list.
    for (int i = oldSize; i < newSize; i++) {
        m_aabb[i] = new AABB();
        m_parent[i] = (i == newSize - 1) ? NULL_NODE : i + 1;
        m_height[i] = -1;
        m_child1[i] = -1;
        m_child2[i] = -1;
    }
    m_freeList = oldSize;
}

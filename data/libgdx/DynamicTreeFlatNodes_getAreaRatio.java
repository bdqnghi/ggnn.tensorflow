@Override
public float getAreaRatio() {
    if (m_root == NULL_NODE) {
        return 0.0f;
    }
    final int root = m_root;
    float rootArea = m_aabb[root].getPerimeter();
    float totalArea = 0.0f;
    for (int i = 0; i < m_nodeCapacity; ++i) {
        if (m_height[i] < 0) {
            // Free node in pool
            continue;
        }
        totalArea += m_aabb[i].getPerimeter();
    }
    return totalArea / rootArea;
}

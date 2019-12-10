@Override
public int getHeight() {
    if (m_root == NULL_NODE) {
        return 0;
    }
    return m_height[m_root];
}

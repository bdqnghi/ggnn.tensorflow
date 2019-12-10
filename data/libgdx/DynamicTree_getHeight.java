@Override
public int getHeight() {
    if (m_root == null) {
        return 0;
    }
    return m_root.height;
}

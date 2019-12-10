public void add(Joint joint) {
    assert (m_jointCount < m_jointCapacity);
    m_joints[m_jointCount++] = joint;
}

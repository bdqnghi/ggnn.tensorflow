public void init(int bodyCapacity, int contactCapacity, int jointCapacity, ContactListener listener) {
    // System.out.println("Initializing Island");
    m_bodyCapacity = bodyCapacity;
    m_contactCapacity = contactCapacity;
    m_jointCapacity = jointCapacity;
    m_bodyCount = 0;
    m_contactCount = 0;
    m_jointCount = 0;
    m_listener = listener;
    if (m_bodies == null || m_bodyCapacity > m_bodies.length) {
        m_bodies = new Body[m_bodyCapacity];
    }
    if (m_joints == null || m_jointCapacity > m_joints.length) {
        m_joints = new Joint[m_jointCapacity];
    }
    if (m_contacts == null || m_contactCapacity > m_contacts.length) {
        m_contacts = new Contact[m_contactCapacity];
    }
    // dynamic array
    if (m_velocities == null || m_bodyCapacity > m_velocities.length) {
        final Velocity[] old = m_velocities == null ? new Velocity[0] : m_velocities;
        m_velocities = new Velocity[m_bodyCapacity];
        System.arraycopy(old, 0, m_velocities, 0, old.length);
        for (int i = old.length; i < m_velocities.length; i++) {
            m_velocities[i] = new Velocity();
        }
    }
    // dynamic array
    if (m_positions == null || m_bodyCapacity > m_positions.length) {
        final Position[] old = m_positions == null ? new Position[0] : m_positions;
        m_positions = new Position[m_bodyCapacity];
        System.arraycopy(old, 0, m_positions, 0, old.length);
        for (int i = old.length; i < m_positions.length; i++) {
            m_positions[i] = new Position();
        }
    }
}

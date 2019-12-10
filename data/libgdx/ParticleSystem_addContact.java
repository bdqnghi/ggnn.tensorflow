public void addContact(int a, int b) {
    assert (a != b);
    Vec2 pa = m_positionBuffer.data[a];
    Vec2 pb = m_positionBuffer.data[b];
    float dx = pb.x - pa.x;
    float dy = pb.y - pa.y;
    float d2 = dx * dx + dy * dy;
    // assert(d2 != 0);
    if (d2 < m_squaredDiameter) {
        if (m_contactCount >= m_contactCapacity) {
            int oldCapacity = m_contactCapacity;
            int newCapacity = m_contactCount != 0 ? 2 * m_contactCount : Settings.minParticleBufferCapacity;
            m_contactBuffer = BufferUtils.reallocateBuffer(ParticleContact.class, m_contactBuffer, oldCapacity, newCapacity);
            m_contactCapacity = newCapacity;
        }
        float invD = d2 != 0 ? MathUtils.sqrt(1 / d2) : Float.MAX_VALUE;
        ParticleContact contact = m_contactBuffer[m_contactCount];
        contact.indexA = a;
        contact.indexB = b;
        contact.flags = m_flagsBuffer.data[a] | m_flagsBuffer.data[b];
        contact.weight = 1 - d2 * invD * m_inverseDiameter;
        contact.normal.x = invD * dx;
        contact.normal.y = invD * dy;
        m_contactCount++;
    }
}

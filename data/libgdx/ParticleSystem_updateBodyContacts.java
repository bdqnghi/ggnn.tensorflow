public void updateBodyContacts() {
    final AABB aabb = temp;
    aabb.lowerBound.x = Float.MAX_VALUE;
    aabb.lowerBound.y = Float.MAX_VALUE;
    aabb.upperBound.x = -Float.MAX_VALUE;
    aabb.upperBound.y = -Float.MAX_VALUE;
    for (int i = 0; i < m_count; i++) {
        Vec2 p = m_positionBuffer.data[i];
        Vec2.minToOut(aabb.lowerBound, p, aabb.lowerBound);
        Vec2.maxToOut(aabb.upperBound, p, aabb.upperBound);
    }
    aabb.lowerBound.x -= m_particleDiameter;
    aabb.lowerBound.y -= m_particleDiameter;
    aabb.upperBound.x += m_particleDiameter;
    aabb.upperBound.y += m_particleDiameter;
    m_bodyContactCount = 0;
    ubccallback.system = this;
    m_world.queryAABB(ubccallback, aabb);
}

public void solveCollision(TimeStep step) {
    final AABB aabb = temp;
    final Vec2 lowerBound = aabb.lowerBound;
    final Vec2 upperBound = aabb.upperBound;
    lowerBound.x = Float.MAX_VALUE;
    lowerBound.y = Float.MAX_VALUE;
    upperBound.x = -Float.MAX_VALUE;
    upperBound.y = -Float.MAX_VALUE;
    for (int i = 0; i < m_count; i++) {
        final Vec2 v = m_velocityBuffer.data[i];
        final Vec2 p1 = m_positionBuffer.data[i];
        final float p1x = p1.x;
        final float p1y = p1.y;
        final float p2x = p1x + step.dt * v.x;
        final float p2y = p1y + step.dt * v.y;
        final float bx = p1x < p2x ? p1x : p2x;
        final float by = p1y < p2y ? p1y : p2y;
        lowerBound.x = lowerBound.x < bx ? lowerBound.x : bx;
        lowerBound.y = lowerBound.y < by ? lowerBound.y : by;
        final float b1x = p1x > p2x ? p1x : p2x;
        final float b1y = p1y > p2y ? p1y : p2y;
        upperBound.x = upperBound.x > b1x ? upperBound.x : b1x;
        upperBound.y = upperBound.y > b1y ? upperBound.y : b1y;
    }
    sccallback.step = step;
    sccallback.system = this;
    m_world.queryAABB(sccallback, aabb);
}

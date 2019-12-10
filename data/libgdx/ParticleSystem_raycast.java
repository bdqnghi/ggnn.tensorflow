/**
 * @param callback
 * @param point1
 * @param point2
 */
public void raycast(ParticleRaycastCallback callback, final Vec2 point1, final Vec2 point2) {
    if (m_proxyCount == 0) {
        return;
    }
    int firstProxy = lowerBound(m_proxyBuffer, m_proxyCount, computeTag(m_inverseDiameter * MathUtils.min(point1.x, point2.x) - 1, m_inverseDiameter * MathUtils.min(point1.y, point2.y) - 1));
    int lastProxy = upperBound(m_proxyBuffer, m_proxyCount, computeTag(m_inverseDiameter * MathUtils.max(point1.x, point2.x) + 1, m_inverseDiameter * MathUtils.max(point1.y, point2.y) + 1));
    float fraction = 1;
    // solving the following equation:
    // ((1-t)*point1+t*point2-position)^2=diameter^2
    // where t is a potential fraction
    final float vx = point2.x - point1.x;
    final float vy = point2.y - point1.y;
    float v2 = vx * vx + vy * vy;
    if (v2 == 0)
        v2 = Float.MAX_VALUE;
    for (int proxy = firstProxy; proxy < lastProxy; ++proxy) {
        int i = m_proxyBuffer[proxy].index;
        final Vec2 posI = m_positionBuffer.data[i];
        final float px = point1.x - posI.x;
        final float py = point1.y - posI.y;
        float pv = px * vx + py * vy;
        float p2 = px * px + py * py;
        float determinant = pv * pv - v2 * (p2 - m_squaredDiameter);
        if (determinant >= 0) {
            float sqrtDeterminant = MathUtils.sqrt(determinant);
            // find a solution between 0 and fraction
            float t = (-pv - sqrtDeterminant) / v2;
            if (t > fraction) {
                continue;
            }
            if (t < 0) {
                t = (-pv + sqrtDeterminant) / v2;
                if (t < 0 || t > fraction) {
                    continue;
                }
            }
            final Vec2 n = tempVec;
            tempVec.x = px + t * vx;
            tempVec.y = py + t * vy;
            n.normalize();
            final Vec2 point = tempVec2;
            point.x = point1.x + t * vx;
            point.y = point1.y + t * vy;
            float f = callback.reportParticle(i, point, n, t);
            fraction = MathUtils.min(fraction, f);
            if (fraction <= 0) {
                break;
            }
        }
    }
}

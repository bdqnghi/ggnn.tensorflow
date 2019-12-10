@Override
public float computeDistanceToOut(Transform xf, Vec2 p, int childIndex, Vec2 normalOut) {
    float xfqc = xf.q.c;
    float xfqs = xf.q.s;
    float tx = p.x - xf.p.x;
    float ty = p.y - xf.p.y;
    float pLocalx = xfqc * tx + xfqs * ty;
    float pLocaly = -xfqs * tx + xfqc * ty;
    float maxDistance = -Float.MAX_VALUE;
    float normalForMaxDistanceX = pLocalx;
    float normalForMaxDistanceY = pLocaly;
    for (int i = 0; i < m_count; ++i) {
        Vec2 vertex = m_vertices[i];
        Vec2 normal = m_normals[i];
        tx = pLocalx - vertex.x;
        ty = pLocaly - vertex.y;
        float dot = normal.x * tx + normal.y * ty;
        if (dot > maxDistance) {
            maxDistance = dot;
            normalForMaxDistanceX = normal.x;
            normalForMaxDistanceY = normal.y;
        }
    }
    float distance;
    if (maxDistance > 0) {
        float minDistanceX = normalForMaxDistanceX;
        float minDistanceY = normalForMaxDistanceY;
        float minDistance2 = maxDistance * maxDistance;
        for (int i = 0; i < m_count; ++i) {
            Vec2 vertex = m_vertices[i];
            float distanceVecX = pLocalx - vertex.x;
            float distanceVecY = pLocaly - vertex.y;
            float distance2 = (distanceVecX * distanceVecX + distanceVecY * distanceVecY);
            if (minDistance2 > distance2) {
                minDistanceX = distanceVecX;
                minDistanceY = distanceVecY;
                minDistance2 = distance2;
            }
        }
        distance = MathUtils.sqrt(minDistance2);
        normalOut.x = xfqc * minDistanceX - xfqs * minDistanceY;
        normalOut.y = xfqs * minDistanceX + xfqc * minDistanceY;
        normalOut.normalize();
    } else {
        distance = maxDistance;
        normalOut.x = xfqc * normalForMaxDistanceX - xfqs * normalForMaxDistanceY;
        normalOut.y = xfqs * normalForMaxDistanceX + xfqc * normalForMaxDistanceY;
    }
    return distance;
}

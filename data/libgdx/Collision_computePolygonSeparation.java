public void computePolygonSeparation(EPAxis axis) {
    axis.type = EPAxis.Type.UNKNOWN;
    axis.index = -1;
    axis.separation = -Float.MAX_VALUE;
    perp.x = -m_normal.y;
    perp.y = m_normal.x;
    for (int i = 0; i < m_polygonB.count; ++i) {
        Vec2 normalB = m_polygonB.normals[i];
        Vec2 vB = m_polygonB.vertices[i];
        n.x = -normalB.x;
        n.y = -normalB.y;
        // float s1 = Vec2.dot(n, temp.set(vB).subLocal(m_v1));
        // float s2 = Vec2.dot(n, temp.set(vB).subLocal(m_v2));
        float tempx = vB.x - m_v1.x;
        float tempy = vB.y - m_v1.y;
        float s1 = n.x * tempx + n.y * tempy;
        tempx = vB.x - m_v2.x;
        tempy = vB.y - m_v2.y;
        float s2 = n.x * tempx + n.y * tempy;
        float s = MathUtils.min(s1, s2);
        if (s > m_radius) {
            // No collision
            axis.type = EPAxis.Type.EDGE_B;
            axis.index = i;
            axis.separation = s;
            return;
        }
        // Adjacency
        if (n.x * perp.x + n.y * perp.y >= 0.0f) {
            if (Vec2.dot(temp.set(n).subLocal(m_upperLimit), m_normal) < -Settings.angularSlop) {
                continue;
            }
        } else {
            if (Vec2.dot(temp.set(n).subLocal(m_lowerLimit), m_normal) < -Settings.angularSlop) {
                continue;
            }
        }
        if (s > axis.separation) {
            axis.type = EPAxis.Type.EDGE_B;
            axis.index = i;
            axis.separation = s;
        }
    }
}

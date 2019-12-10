public void computeEdgeSeparation(EPAxis axis) {
    axis.type = EPAxis.Type.EDGE_A;
    axis.index = m_front ? 0 : 1;
    axis.separation = Float.MAX_VALUE;
    float nx = m_normal.x;
    float ny = m_normal.y;
    for (int i = 0; i < m_polygonB.count; ++i) {
        Vec2 v = m_polygonB.vertices[i];
        float tempx = v.x - m_v1.x;
        float tempy = v.y - m_v1.y;
        float s = nx * tempx + ny * tempy;
        if (s < axis.separation) {
            axis.separation = s;
        }
    }
}

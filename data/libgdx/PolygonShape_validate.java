/**
 * Validate convexity. This is a very time consuming operation.
 *
 * @return
 */
public boolean validate() {
    for (int i = 0; i < m_count; ++i) {
        int i1 = i;
        int i2 = i < m_count - 1 ? i1 + 1 : 0;
        Vec2 p = m_vertices[i1];
        Vec2 e = pool1.set(m_vertices[i2]).subLocal(p);
        for (int j = 0; j < m_count; ++j) {
            if (j == i1 || j == i2) {
                continue;
            }
            Vec2 v = pool2.set(m_vertices[j]).subLocal(p);
            float c = Vec2.cross(e, v);
            if (c < 0.0f) {
                return false;
            }
        }
    }
    return true;
}

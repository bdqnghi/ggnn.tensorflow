/**
 * Build vertices to represent an oriented box.
 *
 * @param hx the half-width.
 * @param hy the half-height.
 * @param center the center of the box in local coordinates.
 * @param angle the rotation of the box in local coordinates.
 */
public final void setAsBox(final float hx, final float hy, final Vec2 center, final float angle) {
    m_count = 4;
    m_vertices[0].set(-hx, -hy);
    m_vertices[1].set(hx, -hy);
    m_vertices[2].set(hx, hy);
    m_vertices[3].set(-hx, hy);
    m_normals[0].set(0.0f, -1.0f);
    m_normals[1].set(1.0f, 0.0f);
    m_normals[2].set(0.0f, 1.0f);
    m_normals[3].set(-1.0f, 0.0f);
    m_centroid.set(center);
    final Transform xf = poolt1;
    xf.p.set(center);
    xf.q.set(angle);
    // Transform vertices and normals.
    for (int i = 0; i < m_count; ++i) {
        Transform.mulToOut(xf, m_vertices[i], m_vertices[i]);
        Rot.mulToOut(xf.q, m_normals[i], m_normals[i]);
    }
}

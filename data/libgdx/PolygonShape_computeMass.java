public void computeMass(final MassData massData, float density) {
    assert (m_count >= 3);
    final Vec2 center = pool1;
    center.setZero();
    float area = 0.0f;
    float I = 0.0f;
    // pRef is the reference point for forming triangles.
    // It's location doesn't change the result (except for rounding error).
    final Vec2 s = pool2;
    s.setZero();
    // This code would put the reference point inside the polygon.
    for (int i = 0; i < m_count; ++i) {
        s.addLocal(m_vertices[i]);
    }
    s.mulLocal(1.0f / m_count);
    final float k_inv3 = 1.0f / 3.0f;
    final Vec2 e1 = pool3;
    final Vec2 e2 = pool4;
    for (int i = 0; i < m_count; ++i) {
        // Triangle vertices.
        e1.set(m_vertices[i]).subLocal(s);
        e2.set(s).negateLocal().addLocal(i + 1 < m_count ? m_vertices[i + 1] : m_vertices[0]);
        final float D = Vec2.cross(e1, e2);
        final float triangleArea = 0.5f * D;
        area += triangleArea;
        // Area weighted centroid
        center.x += triangleArea * k_inv3 * (e1.x + e2.x);
        center.y += triangleArea * k_inv3 * (e1.y + e2.y);
        final float ex1 = e1.x, ey1 = e1.y;
        final float ex2 = e2.x, ey2 = e2.y;
        float intx2 = ex1 * ex1 + ex2 * ex1 + ex2 * ex2;
        float inty2 = ey1 * ey1 + ey2 * ey1 + ey2 * ey2;
        I += (0.25f * k_inv3 * D) * (intx2 + inty2);
    }
    // Total mass
    massData.mass = density * area;
    // Center of mass
    assert (area > Settings.EPSILON);
    center.mulLocal(1.0f / area);
    massData.center.set(center).addLocal(s);
    // Inertia tensor relative to the local origin (point s)
    massData.I = I * density;
    // Shift to center of mass then to original body origin.
    massData.I += massData.mass * (Vec2.dot(massData.center, massData.center));
}

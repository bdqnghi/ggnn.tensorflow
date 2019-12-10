@Override
public final boolean testPoint(final Transform xf, final Vec2 p) {
    float tempx, tempy;
    final Rot xfq = xf.q;
    tempx = p.x - xf.p.x;
    tempy = p.y - xf.p.y;
    final float pLocalx = xfq.c * tempx + xfq.s * tempy;
    final float pLocaly = -xfq.s * tempx + xfq.c * tempy;
    if (m_debug) {
        System.out.println("--testPoint debug--");
        System.out.println("Vertices: ");
        for (int i = 0; i < m_count; ++i) {
            System.out.println(m_vertices[i]);
        }
        System.out.println("pLocal: " + pLocalx + ", " + pLocaly);
    }
    for (int i = 0; i < m_count; ++i) {
        Vec2 vertex = m_vertices[i];
        Vec2 normal = m_normals[i];
        tempx = pLocalx - vertex.x;
        tempy = pLocaly - vertex.y;
        final float dot = normal.x * tempx + normal.y * tempy;
        if (dot > 0.0f) {
            return false;
        }
    }
    return true;
}

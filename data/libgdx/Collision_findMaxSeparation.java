/**
 * Find the max separation between poly1 and poly2 using edge normals from poly1.
 *
 * @param edgeIndex
 * @param poly1
 * @param xf1
 * @param poly2
 * @param xf2
 * @return
 */
public final void findMaxSeparation(EdgeResults results, final PolygonShape poly1, final Transform xf1, final PolygonShape poly2, final Transform xf2) {
    int count1 = poly1.m_count;
    int count2 = poly2.m_count;
    Vec2[] n1s = poly1.m_normals;
    Vec2[] v1s = poly1.m_vertices;
    Vec2[] v2s = poly2.m_vertices;
    Transform.mulTransToOutUnsafe(xf2, xf1, xf);
    final Rot xfq = xf.q;
    int bestIndex = 0;
    float maxSeparation = -Float.MAX_VALUE;
    for (int i = 0; i < count1; i++) {
        // Get poly1 normal in frame2.
        Rot.mulToOutUnsafe(xfq, n1s[i], n);
        Transform.mulToOutUnsafe(xf, v1s[i], v1);
        // Find deepest point for normal i.
        float si = Float.MAX_VALUE;
        for (int j = 0; j < count2; ++j) {
            Vec2 v2sj = v2s[j];
            float sij = n.x * (v2sj.x - v1.x) + n.y * (v2sj.y - v1.y);
            if (sij < si) {
                si = sij;
            }
        }
        if (si > maxSeparation) {
            maxSeparation = si;
            bestIndex = i;
        }
    }
    results.edgeIndex = bestIndex;
    results.separation = maxSeparation;
}

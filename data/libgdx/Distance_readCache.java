public void readCache(SimplexCache cache, DistanceProxy proxyA, Transform transformA, DistanceProxy proxyB, Transform transformB) {
    assert (cache.count <= 3);
    // Copy data from cache.
    m_count = cache.count;
    for (int i = 0; i < m_count; ++i) {
        SimplexVertex v = vertices[i];
        v.indexA = cache.indexA[i];
        v.indexB = cache.indexB[i];
        Vec2 wALocal = proxyA.getVertex(v.indexA);
        Vec2 wBLocal = proxyB.getVertex(v.indexB);
        Transform.mulToOutUnsafe(transformA, wALocal, v.wA);
        Transform.mulToOutUnsafe(transformB, wBLocal, v.wB);
        v.w.set(v.wB).subLocal(v.wA);
        v.a = 0.0f;
    }
    // old metric then flush the simplex.
    if (m_count > 1) {
        float metric1 = cache.metric;
        float metric2 = getMetric();
        if (metric2 < 0.5f * metric1 || 2.0f * metric1 < metric2 || metric2 < Settings.EPSILON) {
            // Reset the simplex.
            m_count = 0;
        }
    }
    // If the cache is empty or invalid ...
    if (m_count == 0) {
        SimplexVertex v = vertices[0];
        v.indexA = 0;
        v.indexB = 0;
        Vec2 wALocal = proxyA.getVertex(0);
        Vec2 wBLocal = proxyB.getVertex(0);
        Transform.mulToOutUnsafe(transformA, wALocal, v.wA);
        Transform.mulToOutUnsafe(transformB, wBLocal, v.wB);
        v.w.set(v.wB).subLocal(v.wA);
        m_count = 1;
    }
}

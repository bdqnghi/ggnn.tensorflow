public void writeCache(SimplexCache cache) {
    cache.metric = getMetric();
    cache.count = m_count;
    for (int i = 0; i < m_count; ++i) {
        cache.indexA[i] = (vertices[i].indexA);
        cache.indexB[i] = (vertices[i].indexB);
    }
}

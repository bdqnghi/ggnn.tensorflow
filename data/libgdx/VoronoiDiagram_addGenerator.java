public void addGenerator(Vec2 center, int tag) {
    Generator g = m_generatorBuffer[m_generatorCount++];
    g.center.x = center.x;
    g.center.y = center.y;
    g.tag = tag;
}

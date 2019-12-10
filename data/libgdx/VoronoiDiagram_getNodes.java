public void getNodes(VoronoiDiagramCallback callback) {
    for (int y = 0; y < m_countY - 1; y++) {
        for (int x = 0; x < m_countX - 1; x++) {
            int i = x + y * m_countX;
            Generator a = m_diagram[i];
            Generator b = m_diagram[i + 1];
            Generator c = m_diagram[i + m_countX];
            Generator d = m_diagram[i + 1 + m_countX];
            if (b != c) {
                if (a != b && a != c) {
                    callback.callback(a.tag, b.tag, c.tag);
                }
                if (d != b && d != c) {
                    callback.callback(b.tag, d.tag, c.tag);
                }
            }
        }
    }
}

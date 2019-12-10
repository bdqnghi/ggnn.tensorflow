public void drawTree(DebugDraw argDraw, int node, int spot, int height) {
    AABB a = m_aabb[node];
    a.getVertices(drawVecs);
    color.set(1, (height - spot) * 1f / height, (height - spot) * 1f / height);
    argDraw.drawPolygon(drawVecs, 4, color);
    argDraw.getViewportTranform().getWorldToScreen(a.upperBound, textVec);
    argDraw.drawString(textVec.x, textVec.y, node + "-" + (spot + 1) + "/" + height, color);
    int c1 = m_child1[node];
    int c2 = m_child2[node];
    if (c1 != NULL_NODE) {
        drawTree(argDraw, c1, spot + 1, height);
    }
    if (c2 != NULL_NODE) {
        drawTree(argDraw, c2, spot + 1, height);
    }
}

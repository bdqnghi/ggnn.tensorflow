public void drawTree(DebugDraw argDraw, DynamicTreeNode node, int spot, int height) {
    node.aabb.getVertices(drawVecs);
    color.set(1, (height - spot) * 1f / height, (height - spot) * 1f / height);
    argDraw.drawPolygon(drawVecs, 4, color);
    argDraw.getViewportTranform().getWorldToScreen(node.aabb.upperBound, textVec);
    argDraw.drawString(textVec.x, textVec.y, node.id + "-" + (spot + 1) + "/" + height, color);
    if (node.child1 != null) {
        drawTree(argDraw, node.child1, spot + 1, height);
    }
    if (node.child2 != null) {
        drawTree(argDraw, node.child2, spot + 1, height);
    }
}

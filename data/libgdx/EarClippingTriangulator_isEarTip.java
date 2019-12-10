private boolean isEarTip(int earTipIndex) {
    int[] vertexTypes = this.vertexTypes.items;
    if (vertexTypes[earTipIndex] == CONCAVE)
        return false;
    int previousIndex = previousIndex(earTipIndex);
    int nextIndex = nextIndex(earTipIndex);
    short[] indices = this.indices;
    int p1 = indices[previousIndex] * 2;
    int p2 = indices[earTipIndex] * 2;
    int p3 = indices[nextIndex] * 2;
    float[] vertices = this.vertices;
    float p1x = vertices[p1], p1y = vertices[p1 + 1];
    float p2x = vertices[p2], p2y = vertices[p2 + 1];
    float p3x = vertices[p3], p3y = vertices[p3 + 1];
    // Only consider vertices that are not part of this triangle, or else we'll always find one inside.
    for (int i = nextIndex(nextIndex); i != previousIndex; i = nextIndex(i)) {
        // if they coincide with one of the triangle's vertices.
        if (vertexTypes[i] != CONVEX) {
            int v = indices[i] * 2;
            float vx = vertices[v];
            float vy = vertices[v + 1];
            // note: check the edge defined by p1->p3 first since this fails _far_ more then the other 2 checks.
            if (computeSpannedAreaSign(p3x, p3y, p1x, p1y, vx, vy) >= 0) {
                if (computeSpannedAreaSign(p1x, p1y, p2x, p2y, vx, vy) >= 0) {
                    if (computeSpannedAreaSign(p2x, p2y, p3x, p3y, vx, vy) >= 0)
                        return false;
                }
            }
        }
    }
    return true;
}

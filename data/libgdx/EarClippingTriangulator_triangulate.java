private void triangulate() {
    int[] vertexTypes = this.vertexTypes.items;
    while (vertexCount > 3) {
        int earTipIndex = findEarTip();
        cutEarTip(earTipIndex);
        // The type of the two vertices adjacent to the clipped vertex may have changed.
        int previousIndex = previousIndex(earTipIndex);
        int nextIndex = earTipIndex == vertexCount ? 0 : earTipIndex;
        vertexTypes[previousIndex] = classifyVertex(previousIndex);
        vertexTypes[nextIndex] = classifyVertex(nextIndex);
    }
    if (vertexCount == 3) {
        ShortArray triangles = this.triangles;
        short[] indices = this.indices;
        triangles.add(indices[0]);
        triangles.add(indices[1]);
        triangles.add(indices[2]);
    }
}

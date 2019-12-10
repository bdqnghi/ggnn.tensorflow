private int findEarTip() {
    int vertexCount = this.vertexCount;
    for (int i = 0; i < vertexCount; i++) if (isEarTip(i))
        return i;
    // Desperate mode: if no vertex is an ear tip, we are dealing with a degenerate polygon (e.g. nearly collinear).
    // Note that the input was not necessarily degenerate, but we could have made it so by clipping some valid ears.
    // Idea taken from Martin Held, "FIST: Fast industrial-strength triangulation of polygons", Algorithmica (1998),
    // http://citeseerx.ist.psu.edu/viewdoc/summary?doi=10.1.1.115.291
    // Return a convex or tangential vertex if one exists.
    int[] vertexTypes = this.vertexTypes.items;
    for (int i = 0; i < vertexCount; i++) if (vertexTypes[i] != CONCAVE)
        return i;
    // If all vertices are concave, just return the first one.
    return 0;
}

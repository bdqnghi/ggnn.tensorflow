/**
 * @return {@link #CONCAVE}, {@link #TANGENTIAL} or {@link #CONVEX}
 */
private int classifyVertex(int index) {
    short[] indices = this.indices;
    int previous = indices[previousIndex(index)] * 2;
    int current = indices[index] * 2;
    int next = indices[nextIndex(index)] * 2;
    float[] vertices = this.vertices;
    return computeSpannedAreaSign(vertices[previous], vertices[previous + 1], vertices[current], vertices[current + 1], vertices[next], vertices[next + 1]);
}

/**
 * @return The number of vertices built up until now, only valid in between the call to begin() and end().
 */
public int getNumVertices() {
    return vertices.size / stride;
}

public void setVertices(float[] vertices) {
    if (vertices.length < 4)
        throw new IllegalArgumentException("polylines must contain at least 2 points.");
    this.localVertices = vertices;
    dirty = true;
}

public void setRegion(PolygonRegion region) {
    this.region = region;
    float[] regionVertices = region.vertices;
    float[] textureCoords = region.textureCoords;
    if (vertices == null || regionVertices.length != vertices.length)
        vertices = new float[(regionVertices.length / 2) * 5];
    // Set the color and UVs in this sprite's vertices.
    float[] vertices = this.vertices;
    for (int i = 0, v = 2, n = regionVertices.length; i < n; i += 2, v += 5) {
        vertices[v] = color.toFloatBits();
        vertices[v + 1] = textureCoords[i];
        vertices[v + 2] = textureCoords[i + 1];
    }
    dirty = true;
}

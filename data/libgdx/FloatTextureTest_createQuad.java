private void createQuad() {
    if (quad != null)
        return;
    quad = new Mesh(true, 4, 6, new VertexAttribute(Usage.Position, 3, "a_position"), new VertexAttribute(Usage.ColorUnpacked, 4, "a_color"), new VertexAttribute(Usage.TextureCoordinates, 2, "a_texCoords"));
    quad.setVertices(new float[] { -1, -1, 0, 1, 1, 1, 1, 0, 1, 1, -1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0, -1, 1, 0, 1, 1, 1, 1, 0, 0 });
    quad.setIndices(new short[] { 0, 1, 2, 2, 3, 0 });
}

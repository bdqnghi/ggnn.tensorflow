private void createScreenQuad() {
    if (screenQuad != null)
        return;
    screenQuad = new Mesh(true, 4, 6, new VertexAttribute(Usage.Position, 3, "a_position"), new VertexAttribute(Usage.ColorUnpacked, 4, "a_color"), new VertexAttribute(Usage.TextureCoordinates, 2, "a_texCoords"));
    Vector3 vec0 = new Vector3(0, 0, 0);
    screenCamera.unproject(vec0);
    Vector3 vec1 = new Vector3(Gdx.graphics.getWidth(), Gdx.graphics.getHeight(), 0);
    screenCamera.unproject(vec1);
    screenQuad.setVertices(new float[] { vec0.x, vec0.y, 0, 1, 1, 1, 1, 0, 1, vec1.x, vec0.y, 0, 1, 1, 1, 1, 1, 1, vec1.x, vec1.y, 0, 1, 1, 1, 1, 1, 0, vec0.x, vec1.y, 0, 1, 1, 1, 1, 0, 0 });
    screenQuad.setIndices(new short[] { 0, 1, 2, 2, 3, 0 });
}

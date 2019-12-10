@Override
public void setMesh(Mesh mesh, Model model) {
    super.setMesh(mesh, model);
    vertexSize = mesh.getVertexSize() / 4;
    positionOffset = mesh.getVertexAttribute(Usage.Position).offset / 4;
    int indicesCount = mesh.getNumIndices();
    if (indicesCount > 0) {
        indices = new short[indicesCount];
        mesh.getIndices(indices);
        triangleCount = indices.length / 3;
    } else
        indices = null;
    vertexCount = mesh.getNumVertices();
    vertices = new float[vertexCount * vertexSize];
    mesh.getVertices(vertices);
}

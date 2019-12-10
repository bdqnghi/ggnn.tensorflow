private void convertMesh(ModelMesh modelMesh) {
    int numIndices = 0;
    for (ModelMeshPart part : modelMesh.parts) {
        numIndices += part.indices.length;
    }
    VertexAttributes attributes = new VertexAttributes(modelMesh.attributes);
    int numVertices = modelMesh.vertices.length / (attributes.vertexSize / 4);
    Mesh mesh = new Mesh(true, numVertices, numIndices, attributes);
    meshes.add(mesh);
    disposables.add(mesh);
    BufferUtils.copy(modelMesh.vertices, mesh.getVerticesBuffer(), modelMesh.vertices.length, 0);
    int offset = 0;
    mesh.getIndicesBuffer().clear();
    for (ModelMeshPart part : modelMesh.parts) {
        MeshPart meshPart = new MeshPart();
        meshPart.id = part.id;
        meshPart.primitiveType = part.primitiveType;
        meshPart.offset = offset;
        meshPart.size = part.indices.length;
        meshPart.mesh = mesh;
        mesh.getIndicesBuffer().put(part.indices);
        offset += meshPart.size;
        meshParts.add(meshPart);
    }
    mesh.getIndicesBuffer().position(0);
    for (MeshPart part : meshParts) part.update();
}

@Override
public void render() {
    if (world.renderMeshes) {
        MeshPart meshPart = model.nodes.get(0).parts.get(0).meshPart;
        softBody.getVertices(meshPart.mesh.getVerticesBuffer(), meshPart.mesh.getVertexSize(), positionOffset, normalOffset, meshPart.mesh.getIndicesBuffer(), meshPart.offset, meshPart.size, indexMap, 0);
        softBody.getWorldTransform(entity.transform);
    }
    super.render();
}

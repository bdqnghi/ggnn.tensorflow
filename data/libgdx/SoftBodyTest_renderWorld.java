@Override
protected void renderWorld() {
    softBody.getVertices(mesh.getVerticesBuffer(), softBody.getNodeCount(), mesh.getVertexSize(), 0);
    softBody.getWorldTransform(instance.transform);
    super.renderWorld();
// modelBatch.begin(camera);
// world.render(modelBatch, lights);
// modelBatch.render(instance, lights);
// modelBatch.end();
}

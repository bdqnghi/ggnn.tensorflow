@Override
public boolean tap(float screenX, float screenY, int count, int button) {
    Ray ray = camera.getPickRay(screenX, screenY);
    rayFrom.set(ray.origin);
    rayTo.set(ray.direction).scl(100).add(rayFrom);
    // Clean the callback object for reuse.
    triangleRaycastCallback.setHitFraction(1);
    triangleRaycastCallback.clearReport();
    triangleRaycastCallback.setFrom(rayFrom);
    triangleRaycastCallback.setTo(rayTo);
    // Ray casting is performed directly on the collision shape.
    // The callback specifies the intersected MeshPart as well as triangle.
    triangleShape.performRaycast(triangleRaycastCallback, rayFrom, rayTo);
    int currentTriangleIndex = triangleRaycastCallback.triangleIndex;
    int currentPartId = triangleRaycastCallback.partId;
    if (currentTriangleIndex == -1 || currentPartId == -1) {
        // No intersection was found.
        return false;
    }
    // Get the position coordinates of the vertices belonging to intersected triangle.
    Mesh mesh = model.meshParts.get(currentPartId).mesh;
    FloatBuffer verticesBuffer = mesh.getVerticesBuffer();
    ShortBuffer indicesBuffer = mesh.getIndicesBuffer();
    int posOffset = mesh.getVertexAttributes().findByUsage(VertexAttributes.Usage.Position).offset / 4;
    int vertexSize = mesh.getVertexSize() / 4;
    int currentTriangleFirstVertexIndex = currentTriangleIndex * 3;
    // Store the three vertices belonging to the selected triangle.
    for (int i = 0; i < 3; i++) {
        int currentVertexIndex = indicesBuffer.get(currentTriangleFirstVertexIndex + i);
        int j = currentVertexIndex * vertexSize + posOffset;
        float x = verticesBuffer.get(j++);
        float y = verticesBuffer.get(j++);
        float z = verticesBuffer.get(j);
        selectedTriangleVertices[i].set(x, y, z);
    }
    return true;
}

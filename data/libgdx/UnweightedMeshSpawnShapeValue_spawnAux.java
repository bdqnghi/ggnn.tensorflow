@Override
public void spawnAux(Vector3 vector, float percent) {
    if (indices == null) {
        // Triangles
        int triangleIndex = MathUtils.random(vertexCount - 3) * vertexSize;
        int p1Offset = triangleIndex + positionOffset, p2Offset = p1Offset + vertexSize, p3Offset = p2Offset + vertexSize;
        float x1 = vertices[p1Offset], y1 = vertices[p1Offset + 1], z1 = vertices[p1Offset + 2], x2 = vertices[p2Offset], y2 = vertices[p2Offset + 1], z2 = vertices[p2Offset + 2], x3 = vertices[p3Offset], y3 = vertices[p3Offset + 1], z3 = vertices[p3Offset + 2];
        Triangle.pick(x1, y1, z1, x2, y2, z2, x3, y3, z3, vector);
    } else {
        // Indices
        int triangleIndex = MathUtils.random(triangleCount - 1) * 3;
        int p1Offset = indices[triangleIndex] * vertexSize + positionOffset, p2Offset = indices[triangleIndex + 1] * vertexSize + positionOffset, p3Offset = indices[triangleIndex + 2] * vertexSize + positionOffset;
        float x1 = vertices[p1Offset], y1 = vertices[p1Offset + 1], z1 = vertices[p1Offset + 2], x2 = vertices[p2Offset], y2 = vertices[p2Offset + 1], z2 = vertices[p2Offset + 2], x3 = vertices[p3Offset], y3 = vertices[p3Offset + 1], z3 = vertices[p3Offset + 2];
        Triangle.pick(x1, y1, z1, x2, y2, z2, x3, y3, z3, vector);
    }
}

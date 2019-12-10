/**
 * Add a {@link btIndexedMesh} to this array
 */
public btTriangleIndexVertexArray addIndexedMesh(final btIndexedMesh mesh) {
    return addIndexedMesh(mesh, PHY_ScalarType.PHY_SHORT);
}

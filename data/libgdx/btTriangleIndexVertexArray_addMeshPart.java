/**
 * Add a {@link MeshPart} instance to this btTriangleIndexVertexArray.
 * The specified mesh must be indexed and triangulated and must outlive this btTriangleIndexVertexArray.
 * The buffers for the vertices and indices are shared amongst both.
 */
public btTriangleIndexVertexArray addMeshPart(final MeshPart meshPart) {
    btIndexedMesh mesh = btIndexedMesh.obtain(meshPart);
    addIndexedMesh(mesh, PHY_ScalarType.PHY_SHORT);
    mesh.release();
    return this;
}

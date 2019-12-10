public Vector3 localGetSupportingVertexWithoutMargin(Vector3 vec) {
    return CollisionJNI.btTriangleMeshShape_localGetSupportingVertexWithoutMargin(swigCPtr, this, vec);
}

public Vector3 localGetSupportingVertex(Vector3 vec) {
    return CollisionJNI.btTriangleMeshShape_localGetSupportingVertex(swigCPtr, this, vec);
}

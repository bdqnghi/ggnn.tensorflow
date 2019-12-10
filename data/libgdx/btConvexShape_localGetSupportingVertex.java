public Vector3 localGetSupportingVertex(Vector3 vec) {
    return CollisionJNI.btConvexShape_localGetSupportingVertex(swigCPtr, this, vec);
}

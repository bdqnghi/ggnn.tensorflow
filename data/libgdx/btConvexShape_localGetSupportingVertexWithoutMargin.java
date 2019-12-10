public Vector3 localGetSupportingVertexWithoutMargin(Vector3 vec) {
    return CollisionJNI.btConvexShape_localGetSupportingVertexWithoutMargin(swigCPtr, this, vec);
}

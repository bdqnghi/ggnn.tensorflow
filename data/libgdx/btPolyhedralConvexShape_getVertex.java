public void getVertex(int i, Vector3 vtx) {
    CollisionJNI.btPolyhedralConvexShape_getVertex(swigCPtr, this, i, vtx);
}

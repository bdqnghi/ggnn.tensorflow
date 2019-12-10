public void getEdge(int i, Vector3 pa, Vector3 pb) {
    CollisionJNI.btPolyhedralConvexShape_getEdge(swigCPtr, this, i, pa, pb);
}

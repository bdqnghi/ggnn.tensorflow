public void getPlane(Vector3 planeNormal, Vector3 planeSupport, int i) {
    CollisionJNI.btPolyhedralConvexShape_getPlane(swigCPtr, this, planeNormal, planeSupport, i);
}

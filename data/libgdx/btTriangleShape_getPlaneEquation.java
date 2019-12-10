public void getPlaneEquation(int i, Vector3 planeNormal, Vector3 planeSupport) {
    CollisionJNI.btTriangleShape_getPlaneEquation(swigCPtr, this, i, planeNormal, planeSupport);
}

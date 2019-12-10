public void getPlaneEquation(btVector4 plane, int i) {
    CollisionJNI.btBoxShape_getPlaneEquation(swigCPtr, this, btVector4.getCPtr(plane), plane, i);
}

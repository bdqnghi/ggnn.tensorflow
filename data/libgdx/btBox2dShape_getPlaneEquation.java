public void getPlaneEquation(btVector4 plane, int i) {
    CollisionJNI.btBox2dShape_getPlaneEquation(swigCPtr, this, btVector4.getCPtr(plane), plane, i);
}

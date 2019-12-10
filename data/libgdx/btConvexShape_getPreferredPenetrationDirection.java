public void getPreferredPenetrationDirection(int index, Vector3 penetrationVector) {
    CollisionJNI.btConvexShape_getPreferredPenetrationDirection(swigCPtr, this, index, penetrationVector);
}

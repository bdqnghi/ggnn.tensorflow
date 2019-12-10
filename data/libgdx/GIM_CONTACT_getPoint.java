public btVector3 getPoint() {
    long cPtr = CollisionJNI.GIM_CONTACT_point_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

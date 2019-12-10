public btVector3 getPoints() {
    long cPtr = CollisionJNI.GIM_TRIANGLE_CONTACT_points_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

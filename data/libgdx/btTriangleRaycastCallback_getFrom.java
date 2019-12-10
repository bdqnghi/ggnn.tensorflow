public btVector3 getFrom() {
    long cPtr = CollisionJNI.btTriangleRaycastCallback_from_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

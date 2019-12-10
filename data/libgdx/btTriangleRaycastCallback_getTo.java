public btVector3 getTo() {
    long cPtr = CollisionJNI.btTriangleRaycastCallback_to_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

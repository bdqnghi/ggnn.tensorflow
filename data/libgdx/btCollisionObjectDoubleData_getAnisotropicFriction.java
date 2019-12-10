public btVector3DoubleData getAnisotropicFriction() {
    long cPtr = CollisionJNI.btCollisionObjectDoubleData_anisotropicFriction_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

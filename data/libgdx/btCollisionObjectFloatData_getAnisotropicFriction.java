public btVector3FloatData getAnisotropicFriction() {
    long cPtr = CollisionJNI.btCollisionObjectFloatData_anisotropicFriction_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

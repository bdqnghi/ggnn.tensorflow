public btVector3 getVelocity() {
    long cPtr = SoftbodyJNI.btSoftBody_Impulse_velocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

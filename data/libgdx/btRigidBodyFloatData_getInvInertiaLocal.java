public btVector3FloatData getInvInertiaLocal() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_invInertiaLocal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

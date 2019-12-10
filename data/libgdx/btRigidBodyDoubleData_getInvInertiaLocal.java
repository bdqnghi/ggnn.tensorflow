public btVector3DoubleData getInvInertiaLocal() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_invInertiaLocal_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

public btVector3FloatData getTotalForce() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_totalForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

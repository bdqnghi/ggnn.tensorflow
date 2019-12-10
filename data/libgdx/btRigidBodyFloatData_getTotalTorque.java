public btVector3FloatData getTotalTorque() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_totalTorque_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

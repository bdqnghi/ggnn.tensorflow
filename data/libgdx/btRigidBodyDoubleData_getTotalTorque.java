public btVector3DoubleData getTotalTorque() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_totalTorque_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

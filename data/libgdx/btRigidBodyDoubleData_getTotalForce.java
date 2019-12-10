public btVector3DoubleData getTotalForce() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_totalForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

public btVector3DoubleData getLinearFactor() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_linearFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

public btVector3DoubleData getAngularFactor() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_angularFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

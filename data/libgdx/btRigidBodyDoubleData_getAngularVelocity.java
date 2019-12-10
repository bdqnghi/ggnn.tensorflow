public btVector3DoubleData getAngularVelocity() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_angularVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

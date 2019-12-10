public btVector3DoubleData getLinearVelocity() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_linearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

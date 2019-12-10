public btVector3DoubleData getGravity() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_gravity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

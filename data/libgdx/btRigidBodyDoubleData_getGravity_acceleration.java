public btVector3DoubleData getGravity_acceleration() {
    long cPtr = DynamicsJNI.btRigidBodyDoubleData_gravity_acceleration_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

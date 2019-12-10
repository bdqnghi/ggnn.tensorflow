public btVector3FloatData getGravity_acceleration() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_gravity_acceleration_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

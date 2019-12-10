public btVector3FloatData getGravity() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_gravity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

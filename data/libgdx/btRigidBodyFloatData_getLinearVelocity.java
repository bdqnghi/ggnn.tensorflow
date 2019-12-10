public btVector3FloatData getLinearVelocity() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_linearVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

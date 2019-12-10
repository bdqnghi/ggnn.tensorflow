public btVector3FloatData getAngularVelocity() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_angularVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

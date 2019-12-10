public btVector3FloatData getAngularFactor() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_angularFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

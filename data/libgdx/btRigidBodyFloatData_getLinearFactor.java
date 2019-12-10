public btVector3FloatData getLinearFactor() {
    long cPtr = DynamicsJNI.btRigidBodyFloatData_linearFactor_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

public btVector3FloatData getLinearMaxMotorForce() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearMaxMotorForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

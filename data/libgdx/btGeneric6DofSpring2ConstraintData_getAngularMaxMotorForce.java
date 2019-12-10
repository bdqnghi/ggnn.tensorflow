public btVector3FloatData getAngularMaxMotorForce() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularMaxMotorForce_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

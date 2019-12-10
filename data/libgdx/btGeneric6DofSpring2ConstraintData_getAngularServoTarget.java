public btVector3FloatData getAngularServoTarget() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularServoTarget_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

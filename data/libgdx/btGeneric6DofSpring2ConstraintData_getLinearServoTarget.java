public btVector3FloatData getLinearServoTarget() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearServoTarget_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

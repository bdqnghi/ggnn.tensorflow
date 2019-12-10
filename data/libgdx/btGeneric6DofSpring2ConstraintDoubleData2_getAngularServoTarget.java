public btVector3DoubleData getAngularServoTarget() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_angularServoTarget_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

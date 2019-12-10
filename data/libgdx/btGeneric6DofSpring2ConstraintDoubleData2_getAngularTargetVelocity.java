public btVector3DoubleData getAngularTargetVelocity() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_angularTargetVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

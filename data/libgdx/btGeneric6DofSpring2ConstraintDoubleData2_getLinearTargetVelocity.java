public btVector3DoubleData getLinearTargetVelocity() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_linearTargetVelocity_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

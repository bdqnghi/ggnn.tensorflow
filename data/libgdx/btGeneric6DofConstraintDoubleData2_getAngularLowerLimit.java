public btVector3DoubleData getAngularLowerLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintDoubleData2_angularLowerLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

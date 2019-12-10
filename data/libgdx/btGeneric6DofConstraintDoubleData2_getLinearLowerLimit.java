public btVector3DoubleData getLinearLowerLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintDoubleData2_linearLowerLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

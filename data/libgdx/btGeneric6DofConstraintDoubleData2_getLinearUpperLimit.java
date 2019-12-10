public btVector3DoubleData getLinearUpperLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintDoubleData2_linearUpperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

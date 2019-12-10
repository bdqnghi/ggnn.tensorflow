public btVector3DoubleData getAngularUpperLimit() {
    long cPtr = DynamicsJNI.btGeneric6DofConstraintDoubleData2_angularUpperLimit_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

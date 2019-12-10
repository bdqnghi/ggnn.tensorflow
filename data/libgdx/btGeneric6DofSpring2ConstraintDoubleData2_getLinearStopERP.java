public btVector3DoubleData getLinearStopERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_linearStopERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

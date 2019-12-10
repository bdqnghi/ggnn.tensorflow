public btVector3FloatData getLinearStopERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearStopERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

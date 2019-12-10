public btVector3DoubleData getAngularStopERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_angularStopERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

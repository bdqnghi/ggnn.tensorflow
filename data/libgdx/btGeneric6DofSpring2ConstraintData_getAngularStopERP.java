public btVector3FloatData getAngularStopERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularStopERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

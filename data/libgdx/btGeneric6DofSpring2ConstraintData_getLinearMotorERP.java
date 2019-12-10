public btVector3FloatData getLinearMotorERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearMotorERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

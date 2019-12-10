public btVector3DoubleData getLinearMotorERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintDoubleData2_linearMotorERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3DoubleData(cPtr, false);
}

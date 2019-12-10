public btVector3FloatData getAngularMotorERP() {
    long cPtr = DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularMotorERP_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3FloatData(cPtr, false);
}

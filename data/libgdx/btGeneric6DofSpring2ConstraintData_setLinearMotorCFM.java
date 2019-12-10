public void setLinearMotorCFM(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearMotorCFM_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

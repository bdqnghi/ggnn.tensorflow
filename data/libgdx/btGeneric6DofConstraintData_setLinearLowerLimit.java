public void setLinearLowerLimit(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofConstraintData_linearLowerLimit_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

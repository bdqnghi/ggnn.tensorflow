public void setLinearUpperLimit(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofConstraintData_linearUpperLimit_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

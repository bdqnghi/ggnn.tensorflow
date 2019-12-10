public void setLinearUpperLimit(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearUpperLimit_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

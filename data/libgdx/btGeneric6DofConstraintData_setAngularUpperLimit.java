public void setAngularUpperLimit(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofConstraintData_angularUpperLimit_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

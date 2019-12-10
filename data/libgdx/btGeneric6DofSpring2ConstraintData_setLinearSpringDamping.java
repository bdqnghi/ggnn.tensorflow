public void setLinearSpringDamping(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearSpringDamping_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

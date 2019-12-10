public void setLinearTargetVelocity(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearTargetVelocity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

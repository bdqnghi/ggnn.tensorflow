public void setAngularTargetVelocity(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularTargetVelocity_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

public void setAngularSpringDamping(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularSpringDamping_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

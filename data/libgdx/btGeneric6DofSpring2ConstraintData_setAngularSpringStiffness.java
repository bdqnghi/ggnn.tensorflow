public void setAngularSpringStiffness(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_angularSpringStiffness_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

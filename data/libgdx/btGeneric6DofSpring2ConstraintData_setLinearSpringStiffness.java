public void setLinearSpringStiffness(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearSpringStiffness_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

public void setLinearServoTarget(btVector3FloatData value) {
    DynamicsJNI.btGeneric6DofSpring2ConstraintData_linearServoTarget_set(swigCPtr, this, btVector3FloatData.getCPtr(value), value);
}

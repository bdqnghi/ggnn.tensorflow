public void setAppliedForceBodyA(btVector3 value) {
    DynamicsJNI.btJointFeedback_appliedForceBodyA_set(swigCPtr, this, btVector3.getCPtr(value), value);
}

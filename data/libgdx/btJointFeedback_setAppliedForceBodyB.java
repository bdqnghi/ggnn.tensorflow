public void setAppliedForceBodyB(btVector3 value) {
    DynamicsJNI.btJointFeedback_appliedForceBodyB_set(swigCPtr, this, btVector3.getCPtr(value), value);
}

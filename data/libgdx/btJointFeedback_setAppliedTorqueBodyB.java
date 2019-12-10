public void setAppliedTorqueBodyB(btVector3 value) {
    DynamicsJNI.btJointFeedback_appliedTorqueBodyB_set(swigCPtr, this, btVector3.getCPtr(value), value);
}

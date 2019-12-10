public void setAppliedTorqueBodyA(btVector3 value) {
    DynamicsJNI.btJointFeedback_appliedTorqueBodyA_set(swigCPtr, this, btVector3.getCPtr(value), value);
}

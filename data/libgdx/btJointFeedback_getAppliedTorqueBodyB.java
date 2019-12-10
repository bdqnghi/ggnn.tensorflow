public btVector3 getAppliedTorqueBodyB() {
    long cPtr = DynamicsJNI.btJointFeedback_appliedTorqueBodyB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

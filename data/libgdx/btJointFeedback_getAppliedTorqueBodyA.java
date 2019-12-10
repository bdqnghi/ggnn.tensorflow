public btVector3 getAppliedTorqueBodyA() {
    long cPtr = DynamicsJNI.btJointFeedback_appliedTorqueBodyA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

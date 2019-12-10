public btVector3 getAppliedForceBodyB() {
    long cPtr = DynamicsJNI.btJointFeedback_appliedForceBodyB_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

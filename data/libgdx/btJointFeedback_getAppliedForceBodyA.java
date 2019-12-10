public btVector3 getAppliedForceBodyA() {
    long cPtr = DynamicsJNI.btJointFeedback_appliedForceBodyA_get(swigCPtr, this);
    return (cPtr == 0) ? null : new btVector3(cPtr, false);
}

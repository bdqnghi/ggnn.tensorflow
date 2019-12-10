public btJointFeedback getJointFeedback() {
    long cPtr = DynamicsJNI.btTypedConstraint_getJointFeedback__SWIG_0(swigCPtr, this);
    return (cPtr == 0) ? null : new btJointFeedback(cPtr, false);
}

public void setJointFeedback(btJointFeedback jointFeedback) {
    DynamicsJNI.btTypedConstraint_setJointFeedback(swigCPtr, this, btJointFeedback.getCPtr(jointFeedback), jointFeedback);
}

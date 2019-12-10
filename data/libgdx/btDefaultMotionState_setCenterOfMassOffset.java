public void setCenterOfMassOffset(btTransform value) {
    LinearMathJNI.btDefaultMotionState_centerOfMassOffset_set(swigCPtr, this, btTransform.getCPtr(value), value);
}
